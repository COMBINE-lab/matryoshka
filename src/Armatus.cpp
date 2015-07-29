/* 
  Authors: Darya Filippova, Geet Duggal, Rob Patro
  dfilippo | geet | robp @cs.cmu.edu
*/


#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>

#include <boost/range/irange.hpp>
#include <boost/filesystem.hpp>
#include <boost/program_options.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/io.hpp>

#include "Version.hpp"
#include "ArmatusUtil.hpp"

#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
  auto str = R"(
	***********************************
	****                           ****
	****        ARMATUS 1.0        ****
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
    int minMeanSamples;
    int areaCovered;
  };

  Params p;

  // Declare the supported options.
  po::options_description opts("armatus options");
  opts.add_options()
  ("gammaMax,g", po::value<double>(&p.gammaMax)->required(), "gamma-max (highest resolution to generate domains)")
  ("gammaMin,x", po::value<double>(&p.gammaMin)->default_value(0), "gamma-min (lowest resolution to generate domains)")
  ("help,h", "produce help message")
  ("input,i", po::value<string>(&p.inputFile)->required(), "input matrix file, expected format (tab-separated): <chromo>\\t<start>\\t<end>\\t<f1 f2 ...>")
  ("topK,k", po::value<size_t>(&p.k)->default_value(1), "Compute the top k optimal solutions")  
  ("minMeanSamples,n", po::value<int>(&p.minMeanSamples)->default_value(100), "Minimum required number of samples to compute a mean")
  ("output,o", po::value<string>(&p.outputPrefix)->required(), "output filename prefix")  
  ("stepSize,s", po::value<double>(&p.stepSize)->default_value(0.05), "Step size to increment resolution parameter")
  ("areaCovered,a", po::value<int>(&p.areaCovered)->required(), "Area Covered by the unique domains (*****NEED TO ADD FUNCTION TO CALCULATE THIS*****");

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
      cerr << "Reading input from " << p.inputFile << ".\n";

  	  auto matProp = parseGZipMatrix(p.inputFile);
      auto mat = matProp.matrix;
      cerr << "MatrixParser read matrix of size: " << mat->size1() << " x " << mat->size2()  << "\n";

      int PAMresult[] = { 1,1,1,1,1,1,1,2,2,2,2 };
      int resultSize = int(sizeof(PAMresult)/sizeof(int));
      int maxHier = PAMresult[resultSize-1];

      double gammaMins[maxHier], gammaMaxes[maxHier], gammaTemp=p.gammaMin;
      int index, indexTemp=0;
      gammaMins[0] = p.gammaMin;
      gammaMaxes[maxHier-1] = p.gammaMax;
      for (int i=0; i<resultSize; i++) {
        index = int(PAMresult[i]-1);
        if (indexTemp != index) {
          gammaMins[index] = gammaTemp;
          gammaMaxes[indexTemp] = gammaTemp - p.stepSize;
          indexTemp = index;
        }
        gammaTemp += p.stepSize;
      }

      int curIndex=1, pIndex=0;
      std::vector<Domain> dConsensusParent, dConsensusHier, dConsensusHierTemp;
      std::vector<std::vector<double>> allMu(11);

      index = 0;
      for (double gamma=p.gammaMin; gamma <= p.gammaMax; gamma+=p.stepSize) {
        index = (int)(gamma*20+0.5);
        allMu[index] = getMu(mat, gamma, p.minMeanSamples);
      }

      for (int hier=1; hier<=maxHier; hier++) {
        if (hier==1) {
          p.gammaMax = gammaMaxes[hier-1];
          p.gammaMin = gammaMins[hier-1];

          auto dEnsemble = multiscaleDomains(mat, p.gammaMax, p.gammaMin, p.stepSize, p.k, p.minMeanSamples, p.areaCovered, allMu);
          dConsensusParent = consensusDomains(dEnsemble);
          
          auto consensusFile = p.outputPrefix + ".consensus.txt";
          cerr << "Writing consensus for level " << hier << endl;
          curIndex = outputDomains(dConsensusParent, consensusFile, matProp, hier, curIndex, -1);
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
            
            boost::numeric::ublas::compressed_matrix<double> passed_ptr = subrange(*mat, start, end, start, end);
            using SparseMatrix = boost::numeric::ublas::compressed_matrix<double>;
            std::shared_ptr<SparseMatrix> mat_topass = make_shared<SparseMatrix>(passed_ptr);
            auto dEnsemble = multiscaleDomains(mat_topass, p.gammaMax, p.gammaMin, p.stepSize, p.k, p.minMeanSamples, p.areaCovered, allMu);

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
