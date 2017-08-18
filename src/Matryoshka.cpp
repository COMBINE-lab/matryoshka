/* 
  Authors: Darya Filippova, Geet Duggal, Rob Patro
  dfilippo | geet | robp @cs.cmu.edu
*/


#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <fstream>

#include <boost/range/irange.hpp>
#include <boost/filesystem.hpp>
#include <boost/program_options.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/io.hpp>
#include <boost/algorithm/string.hpp>

#include "Version.hpp"
#include "MatryoshkaUtil.hpp"

using namespace std;

int main(int argc, char* argv[]) {
  auto str = R"(
	***********************************
	****                           ****
	****        MATRYOSHKA 1.0     ****
	****                           ****
	***********************************
	)";

  namespace po = boost::program_options;
  using std::string;
  using std::cerr;


  class Params {
    public:
    string inputFile;
    string outputPrefix;
    double gammaMax;
    double gammaMin;
    size_t k;
    double stepSize;
    bool outputMultiscale;
    int minMeanSamples;
    int resolution;
    bool sparseFormat; //rao input data format
    string chrom;
  };

  Params p;

  // Declare the supported options.
  po::options_description opts("matryoshka options");
  opts.add_options()
  ("gammaMax,g", po::value<double>(&p.gammaMax)->required(), "gamma-max (highest resolution to generate domains)")
  ("gammaMin,x", po::value<double>(&p.gammaMin)->default_value(0), "gamma-min (lowest resolution to generate domains)")
  ("help,h", "Produce help message")
  ("input,i", po::value<string>(&p.inputFile)->required(), "Input matrix file, expected format (tab-separated): <chromo>\\t<start>\\t<end>\\t<f1 f2 ...>")
  ("topK,k", po::value<size_t>(&p.k)->default_value(1), "Compute the top k optimal solutions")  
  ("outputMultiscale,m", po::value<bool>(&p.outputMultiscale)->zero_tokens()->default_value(false), "Output multiscale domains that are used for clustering to files as well")
  ("minMeanSamples,n", po::value<int>(&p.minMeanSamples)->default_value(100), "Minimum required number of samples to compute a mean")
  ("output,o", po::value<string>(&p.outputPrefix)->required(), "Output filename prefix")  
  ("stepSize,s", po::value<double>(&p.stepSize)->default_value(0.05), "Step size to increment resolution parameter")
  ("resolution,r", po::value<int>(&p.resolution)->default_value(40000), "Resolution of data")
  ("parseSparseFormat,R", po::value<bool>(&p.sparseFormat)->zero_tokens()->default_value(false), "Parse the sparse matrix format")
  ("chromosome,c", po::value<string>(&p.chrom)->default_value("N/A"), "Chromosome");

  po::variables_map vm;
  try {
    po::store(po::parse_command_line(argc, argv, opts), vm);

    if (vm.count("help")) {
      cerr << str << "\n";
      cerr << opts << "\n";
      std::exit(1);
    }

    po::notify(vm);    

    if (vm.count("input")) {
      double eps = 1e-5;
      cerr << "Reading input from " << p.inputFile << ".\n";

      p.chrom = "chr" + p.chrom;
      MatrixProperties matProp;
      if (p.sparseFormat) {
        matProp = parseSparseMatrix(p.inputFile, p.resolution, p.chrom);
      } else { 
          matProp = parseGZipMatrix(p.inputFile);
      }
      auto mat = matProp.matrix;
      cerr << "MatrixParser read matrix of size: " << mat->size1() << " x " << mat->size2()  << "\n";

      auto dEnsemble = multiscaleDomains(matProp, p.gammaMax, p.gammaMin, p.stepSize, p.k, p.minMeanSamples);

      int areaCovered = calCoverage(dEnsemble, matProp);
      int K = dEnsemble.domainSets.size();

      if (p.outputMultiscale) {
        cerr << "Writing all multi scale domains to file" << endl;
        for (int i=0; i<K; i++){
            auto multiscaleFile = p.outputPrefix + ".multiscale.txt";
            outputDomains(dEnsemble.domainSets[i], multiscaleFile, matProp, 0, p.gammaMin+(i*p.stepSize));
        }
      }
      
      double **VI_S = new double *[K];
      for(int i = 0; i < K; i++)
        VI_S[i] = new double[K];
      getVImatrix(dEnsemble, VI_S);

      //for (int i=0;i<K;i++){
      //  for (int j=0; j<K-1; j++)
      //    cerr << VI_S[i][j] << ",";
      //  cerr << VI_S[i][K-1] << endl;
      //}

      std::vector<int> PAMresult = getCluster(VI_S, K);
      int resultSize = PAMresult.size();
      std::vector<int> temp = PAMresult;
      auto uniqEnd = std::unique(temp.begin(), temp.end());
      int maxHier = std::distance(temp.begin(), uniqEnd);
      
      cerr << "There are " << maxHier << " levels of hierarchy with clustering: " << endl;
      for (int i = 0; i<resultSize; i++){
        cerr << PAMresult[i] << " ";
      }
      cerr << endl;

      double gammaMins[maxHier], gammaMaxes[maxHier], gammaTemp=p.gammaMin;
      int index, indexTemp=PAMresult[0], sizeFill=0;
      gammaMins[0] = p.gammaMin; //start of array min gamma
      gammaMaxes[maxHier-1] = p.gammaMax; //end of array max gamma
      for (int i=0; i<resultSize; i++) {
        index = int(PAMresult[i]);
        if (indexTemp != index) {
          gammaMins[sizeFill+1] = gammaTemp;
          gammaMaxes[sizeFill] = gammaTemp - p.stepSize;
          indexTemp = index;
          sizeFill++;
        }
        gammaTemp += p.stepSize;
      }
      
      int curIndex=1, pIndex=0;
      std::vector<Domain> dConsensusParent, dConsensusHier, dConsensusHierTemp;
      std::vector<std::vector<double>> allMu(K);

      index = 0;
      for (double gamma=p.gammaMin; gamma <= p.gammaMax+eps; gamma+=p.stepSize) {
        allMu[index] = getMu(mat, gamma, p.minMeanSamples);
        index++;
      }

      index = 0;
      for (int hier=1; hier<=maxHier; hier++) {
        if (hier==1) {
          p.gammaMax = gammaMaxes[hier-1];
          p.gammaMin = gammaMins[hier-1];

          auto dEnsemble = multiscaleDomains(matProp, p.gammaMax, p.gammaMin, p.stepSize, p.k, p.minMeanSamples, areaCovered, allMu, index);
          dConsensusParent = consensusDomains(dEnsemble);
          
          auto consensusFile = p.outputPrefix + ".consensus.txt";
          cerr << "Writing consensus for level " << hier << endl;
          curIndex = outputDomains(dConsensusParent, consensusFile, matProp, hier, curIndex, -1);
          index = int(((p.gammaMax - p.gammaMin) / p.stepSize)+0.5) + 1;
        } 
        else { 
          p.gammaMax = gammaMaxes[hier-1];
          p.gammaMin = gammaMins[hier-1];
          if(dConsensusHierTemp.size() > 0) {
            dConsensusParent = dConsensusHierTemp;
            dConsensusHierTemp.clear();
          }

          for (auto d : dConsensusParent) {
            size_t start = d.start;
            size_t end = d.end;
            pIndex++;
            
            //boost::numeric::ublas::compressed_matrix<double> passed_ptr = subrange(*mat, start, end, start, end);
            //using SparseMatrix = boost::numeric::ublas::compressed_matrix<double>;
            //std::shared_ptr<SparseMatrix> mat_topass = make_shared<SparseMatrix>(passed_ptr);
            boost::numeric::ublas::matrix<double> passed_ptr = subrange(*mat, start, end, start, end);
            using SparseMatrix = boost::numeric::ublas::matrix<double>;
            std::shared_ptr<SparseMatrix> mat_topass = make_shared<SparseMatrix>(passed_ptr);
            matProp.matrix = mat_topass;
            auto dEnsemble = multiscaleDomains(matProp, p.gammaMax, p.gammaMin, p.stepSize, p.k, p.minMeanSamples, areaCovered, allMu, index);

            auto dConsensusHier = consensusDomains(dEnsemble);
            for (size_t i=0; i<dConsensusHier.size(); i++){
              dConsensusHier[i].start += start;
              dConsensusHier[i].end += start;
            }
            dConsensusHierTemp.insert(dConsensusHierTemp.end(), dConsensusHier.begin(), dConsensusHier.end());
            auto consensusFile = p.outputPrefix + ".consensus.txt";
            curIndex = outputDomains(dConsensusHier, consensusFile, matProp, hier, curIndex, pIndex);
          }
          cerr << "Writing consensus for level " << hier << endl;
          index += int(((p.gammaMax - p.gammaMin) / p.stepSize)+0.5) + 1;
        }
      }

    } else {
      cerr << "Input file was not set.\n";
      std::exit(1);
    }

  } catch (po::error& e) {
    cerr << "exception : [" << e.what() << "]. Exiting.\n";
    std::exit(1);
  }

  return 0;
}
