/*
	Authors: Darya Filippova, Geet Duggal, Rob Patro
	dfilippo | geet | robp @cs.cmu.edu
*/

#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <string>
#include <limits>

#include <boost/range/adaptors.hpp>
#include <boost/range/irange.hpp>
#include <boost/iostreams/filtering_streambuf.hpp>
#include <boost/iostreams/copy.hpp>
#include <boost/iostreams/filter/gzip.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/numeric/ublas/matrix_sparse.hpp>
#include <boost/numeric/ublas/io.hpp>
#include "MatryoshkaUtil.hpp"
#include "MatryoshkaParams.hpp"
#include "IntervalScheduling.hpp"
#include "MatryoshkaParams.hpp"
#include "MatryoshkaDAG.hpp"

string matrix_format_error = "Invalid matrix format. Expected format: \n<chromoID>\t<fragment_start>\t<fragment_end>\t<row of entries>";

MatrixProperties parseGZipMatrix(string path) {
	MatrixProperties prop;

    prop.matrix = std::make_shared<SparseMatrix>();

	ifstream file(path, ios_base::in | ios_base::binary);
    if (!file.good()) {
        std::cerr << "Couldn't read file " << path << std::endl;
        std::exit(1);
    }
    assert(file.good());
    boost::iostreams::filtering_streambuf<boost::iostreams::input> in;
    in.push(boost::iostreams::gzip_decompressor());
    in.push(file);

    string line;
    std::istream incoming(&in);
    bool firstLine = true;
    size_t i = 0;
    double tot = 0.0;
    size_t nedge = 0;
    while ( getline(incoming, line) ) {
    	vector<string> parts;
        boost::trim(line);
		boost::split(parts, line, boost::is_any_of("\t"));

        if (firstLine) {
            if (parts.size() - 3 < 100) {
                cerr << "[INFO] Matrix is smaller than the recommended minimum size of 101." << endl;
                // exit(1);
            }
            prop.matrix->resize(parts.size() - 3, parts.size() - 3, false);
            prop.chrom = parts[0];

            int start = 0, end = 0;
            try {
                end = stoi(parts[2]);
                start = stoi(parts[1]);
                if (start >= end) {
                    cerr << "[ERROR] " << matrix_format_error << endl;
                }
            }
            catch (std::invalid_argument & ex) {
                cerr << "[ERROR] " << matrix_format_error << endl;
                cerr << ex.what() << endl;
                exit(1);
            }
            prop.resolution = end - start;
            cerr << prop.chrom << " at resolution " << prop.resolution << "bp" << endl;
            firstLine = false;
        }

        for (size_t j : boost::irange(3 + i, parts.size())) {
            double e  = stod(parts[j]);
            if (e > 0.0) {
                size_t row = j - 3;
                prop.matrix->insert_element(i, row, e);
                tot += e;
                nedge++;
            }
        }

    	++i;
        //if ( i % 1000 == 0 ) { std::cerr << "line " << i << "\n"; }
        if (incoming.eof()) break;
    }
    prop.computemuBI();
    return prop;
}

MatrixProperties parseSparseMatrix(string path, int resolution, string chrom) {
    MatrixProperties prop;
    int M=0;
    int n;

    {
        ifstream file(path);
        if (!file.good()) {
            std::cerr << "Couldn't read file: " << path << std::endl;
            std::exit(1);
        }
        assert(file.good());

        string line;
        int v, w;
        double count;
        int maxv = 0;
        while ( file >> v >> w >> count )  {
            if (v > maxv) maxv = v;
            if (w > maxv) maxv = w;
            M++;
        }
        n = maxv/resolution+1;
        prop.chrom = chrom;
        prop.resolution = resolution;
        cerr << "Building matrix for chromosome " << prop.chrom << " at resolution " << prop.resolution << "bp with " << n << " rows." << endl;
    }

    cerr << "Initializing matrix to zero elements" << endl;
    prop.matrix = std::make_shared<SparseMatrix>(n,n,M);

    for (auto i = 0; i < n; i++) {
        for (auto j = 0; j < n; j++) {
            prop.matrix->insert_element(i,j, 0.0);
        }
    }
    
    ifstream file(path);
    string line;
    int v, w;
    double count;
    int m = 0;
    while ( file >> v >> w >> count )  {
        size_t i = v/resolution;
        size_t j = w/resolution;
        //prop.matrix->insert_element(i, j, log(count));
        prop.matrix->insert_element(i, j, count);
        m++;
        //if ( m % 100000 == 0 ) { std::cerr << "" << float(m)/M*100 << "%\n"; }
    }

    prop.computemuBI();
    return prop;
}

void MatrixProperties::computemuBI() {
    using namespace boost::range;
    // A reference will be easier to work with here
    SparseMatrix& M = *matrix;
    int n = matrix->size1();
    BI = std::vector<double>(matrix->size1()+1);

    double interval = 3;
    double steps = 12;
    double b = 0, a1, a2;
    muBI = 0;
    for (int i=0; i<n; i++) {
        b = 0;
        for (int q=1; q<=steps; q++) {
            for (int p=1; p<=interval; p++){
                a1 = 0;
                a2 = 0;
                if (i-q >= 0) {
                    if (i-p >= 0)
                        a1 = M(i-q, i-p);
                    if (i+p < n)
                        a1 -= M(i-q, i+p);
                }
                if (i+q < n) {
                    if (i-p >= 0)
                        a2 = M(i+q, i-p);
                    if (i+p < n)
                        a2 -= M(i+q, i+p);
                }
                b += abs(a1) + abs(a2);
            }
        }
        BI[i] = b;
        muBI += b;
    }
    muBI /= n;
    cerr << "Mean Boundary Index is " << muBI << endl;
}

// domain size
double d(size_t const & i, size_t const & j) {return j - i + 1;}

Domain::Domain(size_t s, size_t e) : start(s), end(e) { }
Domain::Domain(size_t s, size_t e, float w) : start(s), end(e), weight(w) { }

DomainSet consensusDomains(WeightedDomainEnsemble& dEnsemble) {
    using PersistenceMap = map<Domain, double>;
    PersistenceMap pmap;

    for (auto dSetIdx : boost::irange(size_t{0}, dEnsemble.domainSets.size())) {
        auto& dSet = dEnsemble.domainSets[dSetIdx];
        for (auto& domain : dSet) {
            pmap[domain] = domain.weight;
        }
    }

    Intervals ivals;

    for (auto domainPersistence : pmap) {
        auto domain = domainPersistence.first;
        auto persistence = domainPersistence.second;
        ivals.push_back(WeightedInterval(domain.start, domain.end, persistence));
    }

    IntervalScheduler scheduler(ivals);
    scheduler.computeSchedule();

    DomainSet dSet;
    for (auto ival : scheduler.extractIntervals()) {
        dSet.push_back(Domain(ival.start, ival.end));
    }

    sort(dSet.begin(), dSet.end());

    return dSet;
}

//used for calculating domains across gammas in whole matrix
WeightedDomainEnsemble multiscaleDomains(MatrixProperties matProp,
    float gammaMax, float gammaMin, double stepSize, int k, int minMeanSamples) {

    auto A = matProp.matrix;
    double muBI = matProp.muBI;
    std::vector<double> BI = matProp.BI;

    WeightedDomainEnsemble dEnsemble;
    double eps = 1e-5;

    for (double gamma=gammaMin; gamma <= gammaMax+eps; gamma+=stepSize) {

        cerr << "gamma=" << gamma << endl;

        MatryoshkaParams params(A, gamma, k, minMeanSamples); // k parameter is not used for anything in Params
        MatryoshkaDAG G(params, BI, muBI); // but is used in the DAG
        G.build();
        G.computeTopK();

        auto domainEnsemble = G.extractTopK(-1); //area covered not used here
        auto& domains = domainEnsemble.domainSets;
        auto& weights = domainEnsemble.weights;
        dEnsemble.domainSets.insert(dEnsemble.domainSets.end(), domains.begin(), domains.end());
        dEnsemble.weights.insert(dEnsemble.weights.end(), weights.begin(), weights.end());
    }

    return dEnsemble;
}

//used for calculating domains at hierarchical level after gamma clustering
WeightedDomainEnsemble multiscaleDomains(MatrixProperties matProp,
    float gammaMax, float gammaMin, double stepSize, int k, int minMeanSamples,
    int areaCovered, std::vector<std::vector<double>> allMu, int index) {

    auto A = matProp.matrix;
    double muBI = matProp.muBI;
    std::vector<double> BI = matProp.BI;

    WeightedDomainEnsemble dEnsemble;
    double eps = 1e-5;
    int ind = index;
    std::vector<double> mu;

    for (double gamma=gammaMin; gamma <= gammaMax+eps; gamma+=stepSize) {
        mu = allMu[ind];
        MatryoshkaParams params(A, gamma, k, minMeanSamples, mu); // k parameter is not used for anything in Params
        MatryoshkaDAG G(params, BI, muBI); // but is used in the DAG
        G.build();
        G.computeTopK();
        auto domainEnsemble = G.extractTopK(areaCovered);
        auto& domains = domainEnsemble.domainSets;
        auto& weights = domainEnsemble.weights;
        dEnsemble.domainSets.insert(dEnsemble.domainSets.end(), domains.begin(), domains.end());
        dEnsemble.weights.insert(dEnsemble.weights.end(), weights.begin(), weights.end());
        ind++;
    }

    return dEnsemble;
}

void outputDomains(DomainSet dSet, string fname, MatrixProperties matProp, int start, float hier) {
    ofstream file;
    file.open(fname, ios::app);
    int res = matProp.resolution;
    for (auto d : dSet) {
        //file << matProp.chrom << "\t" << (d.start+start)*res << "\t" << (d.end+start)*res << "\t" << hier << endl;
        //file << chromosome << tool << feature << start << end << score << strand << frame << hier << endl;
        file << matProp.chrom << "\t" << "Matryoshka1.0" << "\t" << "Domain" << "\t" << (d.start)*res << "\t" <<
            (d.end)*res << "\t" << "." << "\t" << "." << "\t" << "." << "\t" << "Level=" << hier << endl;
    }
    file.close();
}

int outputDomains(DomainSet dSet, string fname, MatrixProperties matProp, int hier, int myIndex, int pIndex) {
    ofstream file;
    file.open(fname, ios::app);
    int res = matProp.resolution;
    for (auto d : dSet) {
        //file << myIndex << "\t" << matProp.chrom << "\t" << (d.start)*res << "\t" <<
        //    (d.end)*res << "\t" << pIndex << "\t" << hier << endl;
        //file << chromosome << tool << feature << start << end << score << strand << frame << hier << endl;
        file << matProp.chrom << "\t" << "Matryoshka1.0" << "\t" << "Domain" << "\t" << (d.start)*res << "\t" <<
            (d.end)*res << "\t" << "." << "\t" << "." << "\t" << "." << "\t" <<
            "Level=" << hier << ";ID=" << myIndex;
        if(pIndex != -1)
            file << ";Parent=" << pIndex << endl;
        else
            file << endl;
        myIndex++;
    }
    file.close();
    return myIndex;
}

//calculate length of chromosome covered by domain set
int calCoverage(WeightedDomainEnsemble& dEnsemble, MatrixProperties matProp) {
    DomainSet allDomainSet; //across all gamma values
    int res = matProp.resolution;

    for (auto dSetIdx : boost::irange(size_t{0}, dEnsemble.domainSets.size())) {
        auto& dSet = dEnsemble.domainSets[dSetIdx];
        for (auto d : dSet)
            allDomainSet.push_back(Domain((d.start+1)*res, (d.end+1)*res));
    }

    sort(allDomainSet.begin(), allDomainSet.end());

    //calculate coverage
    size_t curStart = allDomainSet[0].start;
    size_t curEnd = allDomainSet[0].end;
    int coverage = curEnd - curStart;
    int curSum = 0;
    for (auto d : allDomainSet) {
        if ((d.start>curStart) && (d.end>curEnd) && (d.start<curEnd)) {
            curEnd = d.end;
            curSum = curEnd-curStart;
        } else if ((d.start==curStart) && (d.end>curEnd)) {
            curEnd = d.end;
            curSum = curEnd-curStart;
        } else if ((d.start>curEnd) && (d.end>curEnd)) {
            coverage += curSum;
            curStart = d.start;
            curEnd = d.end;
            curSum = curEnd - curStart;
        }
    }
    coverage += curSum;

    return coverage;
}

std::vector<double> getMu(std::shared_ptr<SparseMatrix> A, float gamma, int minMeanSamples){
    MatryoshkaParams params(A, gamma, 0, minMeanSamples);
    return params.mu;
}

//matrix contains variation of information between domains across all gamma values
void getVImatrix(WeightedDomainEnsemble& dEnsemble, double **VI_S) {
    double VI;
    size_t N=0;

    for (auto dSetIdx : boost::irange(size_t{0}, dEnsemble.domainSets.size())) {
        auto& dSet = dEnsemble.domainSets[dSetIdx];
        for (auto d : dSet) {
            if (N < d.end)
                N = d.end;
        }
    }

    for (auto dSetIdx1 : boost::irange(size_t{0}, dEnsemble.domainSets.size())) {
        auto& dSet1 = dEnsemble.domainSets[dSetIdx1];
        for (auto dSetIdx2 : boost::irange(dSetIdx1, dEnsemble.domainSets.size())) {
            auto& dSet2 = dEnsemble.domainSets[dSetIdx2];
            VI = getVI(dSet1, dSet2, N+2);
            VI_S[dSetIdx1][dSetIdx2] = VI;
            VI_S[dSetIdx2][dSetIdx1] = VI;
        }
    }
}

//get the variation of information between 2 sets of domains
double getVI(DomainSet dSet1, DomainSet dSet2, size_t N){
    reverse(dSet1.begin(), dSet1.end());
    reverse(dSet2.begin(), dSet2.end());
    double MI = 0, VI = 0;
    size_t minD = dSet1[0].start;
    size_t maxD = dSet1[0].end;

    for (auto d : dSet1) {
        if (minD > d.start) { minD = d.start; }
        if (maxD < d.end) { maxD = d.end; }
    }

    for (auto d : dSet2) {
        if (minD > d.start) { minD = d.start; }
        if (maxD < d.end) { maxD = d.end; }
    }

    size_t L = maxD - minD + 1, start = minD, end = 0;

    DomainSet dSet1Plus;
    for (auto d1 : dSet1) {
        if (start < d1.start)
            dSet1Plus.push_back(Domain(start, d1.start-1));
        dSet1Plus.push_back(d1);
        start = d1.end+1;
        end = d1.end;
    }
    if (end < maxD)
        dSet1Plus.push_back(Domain(end+1, maxD));

    start = minD;
    DomainSet dSet2Plus;
    for (auto d2 : dSet2) {
        if (start < d2.start)
            dSet2Plus.push_back(Domain(start, d2.start-1));
        dSet2Plus.push_back(d2);
        start = d2.end+1;
        end = d2.end;
    }
    if (end < maxD)
        dSet2Plus.push_back(Domain(end+1, maxD));

    std::vector<double> p_xs, p_ys;
    for (auto d1 : dSet1Plus)
        p_xs.push_back((d1.end + 1 - d1.start) * 1.0 / L);
    for (auto d2 : dSet2Plus)
        p_ys.push_back((d2.end + 1 - d2.start) * 1.0 / L);

    double p_x, p_y, p_xy;
    int overlap;
    for (size_t i = 0; i < dSet1Plus.size(); i++) {
        auto d1 = dSet1Plus[i];
        p_x = p_xs[i];
        for (size_t j = 0; j < dSet2Plus.size(); j++) {
            auto d2 = dSet2Plus[j];
            p_y = p_ys[j];
            overlap = min(d2.end, d1.end) + 1 - max(d1.start, d2.start);
            if (overlap <= 0)
                continue;
            p_xy = (overlap * 1.0) / L;
            MI += (p_xy * log(p_xy / (p_x * p_y)));
        }
    }

    double H_1 = 0, H_2 = 0;
    for (double p : p_xs)
        H_1 += p * log(p);
    for (double p : p_ys)
        H_2 += p * log(p);
    VI = (-1*H_1) + (-1*H_2) - 2*MI;

    return VI;
}

//cluster the values according to variation of information to get gamma values
//at each level of the hierarchy
std::vector<int> getCluster(double **VI_S, int K){
    int clusterid[K], PAMresult[K];
    double avgWidth = 0;
    double tempWidth = (std::numeric_limits<double>::min)();

    //to sort the vector, maintaining indices
    std::vector<int> indices;
    std::priority_queue<std::pair<double, int>> q_temp;

    q_temp.push(std::pair<double, int>(0, 0));
    for (int i=0; i<K-1; i++)
        q_temp.push(std::pair<double, int>(VI_S[i][i+1], i+1));

    for (int i=0; i<K-1; i++) {
        int index = q_temp.top().second;
        indices.push_back(index);
        q_temp.pop();
    }

    size_t tempK = size_t(K);
    SymmetricMatrix sums = SymmetricMatrix(tempK, tempK);
    for (size_t i : boost::irange(size_t{1}, tempK)) {
        sums(i, i) = VI_S[i][i];
    }

    for (size_t i : boost::irange(size_t{0}, tempK)) {
        std::vector<double> columnSums(i+1);
        columnSums[i] = VI_S[i][i];
        for (size_t j : boost::adaptors::reverse(boost::irange(size_t{0}, i))) {
            columnSums[j] = columnSums[j+1] + VI_S[j][i];
            sums(j, i) = sums(j, i-1) + columnSums[j];
        }
    }

    for (int i=2; i<K; i++) { //to get the best number of clusters
            optK(sums, i, clusterid);

            avgWidth = calAvgWidth(VI_S, clusterid, K);
            if (avgWidth > tempWidth){
                tempWidth = avgWidth;
                std::copy(clusterid, clusterid + K, PAMresult);
            }
    }
    PAMresult[0] = 0; //enforce that first element is in 0th cluster
    std::vector<int> vec(PAMresult, PAMresult + K);
    return(vec);
}

void optK(SymmetricMatrix sums, int k, int clusterid[]) {
    size_t tempK = sums.size1();

    float solDict[k+1][tempK];
    for (size_t i : boost::irange(size_t{3},size_t(k+1))) {
        for (size_t j : boost::irange(size_t{0}, tempK))
            solDict[i][j] = 1000000;
    }

    std::map<std::pair<int, int>, int> opt;
    opt[std::make_pair(0, 0)] = 0;

    for (size_t i : boost::irange(size_t{0}, tempK))
        solDict[1][i] = sums(0, i);

   for (size_t l : boost::irange(size_t{2},size_t(k+1))) {
        for (size_t i : boost::irange(size_t{1}, tempK)) {
            float m = 10000000;
            int x = 0;
            for (size_t j : boost::irange(size_t{1}, i)) {
                if (solDict[l-1][j] + sums(j+1, i) < m) {
                    m = solDict[l-1][j] + sums(j+1, i);
                    x = j;
                }
            }
            solDict[l][i] = m;
            opt[std::make_pair(l,i)] = x;
        }
    }

    int lvl = k;
    int right = tempK-1;
    int left = opt[std::make_pair(lvl, right)] + 1;
    std::vector<pair<int, int>> bt;
    while (lvl > 1) {
        bt.push_back(std::make_pair(left, right));
        lvl -= 1;
        if (lvl > 1) {
            right = left - 1;
            left = opt[std::make_pair(lvl, right)] + 1;
        }
        else {
            right = left - 1;
            bt.push_back(std::make_pair(0, right));
        }
    }

    reverse(bt.begin(), bt.end());
    int myID = 0;
    int size = 0;
    for (size_t i : boost::irange(size_t{0}, bt.size())) {
        for (int j=bt[i].first; j<=bt[i].second; j++)
            clusterid[size++] = myID;
        myID++;
    }

    return;
}

//calculates the average width later used to get the best cluster
double calAvgWidth(double **VI_S, int clusterid[], int K){
    int myCluster, curCluster;
    double cDist[K], sil[K];
    int cCount[K];
    memset(cCount, 0, K*sizeof(int));
    double a, b, width = 0;

    for (int i=0; i<K; i++){
        curCluster = clusterid[i];
        cCount[curCluster] += 1;
    }

    for (int i=0; i<K; i++){
        memset(cDist, 0, K*sizeof(double));

        for (int j=0; j<K; j++){
            curCluster = clusterid[j];
            cDist[curCluster] += abs(VI_S[i][j]);
        }

        myCluster = clusterid[i];
        if (cCount[myCluster] > 1)
            a = cDist[myCluster]/(cCount[myCluster]-1); //not counting self
        else
            a = 0;
        cDist[myCluster] = (std::numeric_limits<double>::max)();
        b = (std::numeric_limits<double>::max)();
        for (int j=0; j<K; j++) {
            if (cCount[j] > 0)
                cDist[j] /= cCount[j];
            if ((cDist[j] < b) && (cDist[j] != 0))
                b = cDist[j];
        }

        if (a == 0)
            sil[i] = 0;
        else
            sil[i] = (b-a)/max(a,b);
    }

    for (int i=0; i<K; i++)
        width += sil[i];

    return (width/K);
}
