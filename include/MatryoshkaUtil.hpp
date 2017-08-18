/* 
    Authors: Darya Filippova, Geet Duggal, Rob Patro
    dfilippo | geet | robp @cs.cmu.edu
*/

#ifndef __MATRYOSHKA_UTIL_HPP__
#define __MATRYOSHKA_UTIL_HPP__

#include <memory>
#include <string>
#include <vector>

#include <boost/numeric/ublas/matrix_sparse.hpp>
#include <boost/numeric/ublas/symmetric.hpp>

using namespace std;

//using SparseMatrix = boost::numeric::ublas::compressed_matrix<double>;
using SparseMatrix = boost::numeric::ublas::matrix<double>;

class MatrixProperties {
    public:
        void computemuBI();
        std::shared_ptr<SparseMatrix> matrix;
        std::string chrom;
        int resolution;
        std::vector<double> BI;
        double muBI;
};

MatrixProperties parseGZipMatrix(string path);
MatrixProperties parseSparseMatrix(string path, int resolution, string chrom);

double d(size_t const & i, size_t const & j);

class MatryoshkaParams;
class Domain {
    public:
    Domain(size_t s, size_t e);
    Domain(size_t s, size_t e, float w);
    size_t start;
    size_t end;
    float weight;
    double score(MatryoshkaParams& p);
    bool operator< (const Domain &other) const {
        return std::make_tuple(start, end) < std::make_tuple(other.start, other.end);
    }
};

using SymmetricMatrix = boost::numeric::ublas::symmetric_matrix<double, boost::numeric::ublas::upper>;

using DomainSet = vector<Domain>;
using DomainEnsemble = vector<DomainSet>;
using Weights = vector<double>;

struct WeightedDomainEnsemble {
    DomainEnsemble domainSets;
    Weights weights;
};

// void optimalDomains(std::shared_ptr<SparseMatrix> A, float gamma);

WeightedDomainEnsemble multiscaleDomains(MatrixProperties matProp, float gammaMax, float gammaMin, double stepSize, int k, int minMeanSamples);
WeightedDomainEnsemble multiscaleDomains(MatrixProperties matProp, float gammaMax, float gammaMin, 
    double stepSize, int k, int minMeanSamples, int areaCovered, std::vector<std::vector<double>> allMu, int index);

DomainSet consensusDomains(WeightedDomainEnsemble& dEnsemble);

void outputDomains(DomainSet dSet, string fname, MatrixProperties matProp, int start, float hier);
int outputDomains(DomainSet dSet, string fname, MatrixProperties matProp, int hier, int myIndex, int pIndex);

int calCoverage(WeightedDomainEnsemble& dEnsemble, MatrixProperties matProp);
std::vector<double> getMu(std::shared_ptr<SparseMatrix> A, float gamma, int minMeanSamples);
std::vector<double> getMax(std::shared_ptr<SparseMatrix> A, float gamma, int minMeanSamples);

void getVImatrix(WeightedDomainEnsemble& dEnsemble, double **VI_S);
double getVI(DomainSet dSet1, DomainSet dSet2, size_t N);
std::vector<int> getCluster(double **VI_S, int K);
double calAvgWidth(double **VI_S, int clusterid[], int K);
void optK(SymmetricMatrix sums, int k, int clusterid[]);
void randomassign (int nclusters, int nelements, int clusterid[]);

#endif // __MATRYOSHKA_UTIL_HPP__
