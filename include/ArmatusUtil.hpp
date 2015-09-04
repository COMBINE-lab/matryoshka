/* 
    Authors: Darya Filippova, Geet Duggal, Rob Patro
    dfilippo | geet | robp @cs.cmu.edu
*/

#ifndef __ARMATUS_UTIL_HPP__
#define __ARMATUS_UTIL_HPP__

#include <memory>
#include <string>
#include <vector>

#include <boost/numeric/ublas/matrix_sparse.hpp>
#include <boost/numeric/ublas/symmetric.hpp>

using namespace std;

using SparseMatrix = boost::numeric::ublas::compressed_matrix<double>;

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

double d(size_t const & i, size_t const & j);

class ArmatusParams;
class Domain {
    public:
    Domain(size_t s, size_t e);
    Domain(size_t s, size_t e, float w);
    size_t start;
    size_t end;
    float weight;
    double score(ArmatusParams& p);
    bool operator< (const Domain &other) const {
        return std::make_tuple(start, end) < std::make_tuple(other.start, other.end);
    }
};

using DomainSet = vector<Domain>;
using DomainEnsemble = vector<DomainSet>;
using Weights = vector<double>;

struct WeightedDomainEnsemble {
    DomainEnsemble domainSets;
    Weights weights;
};

// void optimalDomains(std::shared_ptr<SparseMatrix> A, float gamma);

WeightedDomainEnsemble multiscaleDomains(MatrixProperties matProp, float gammaMax, double stepSize, int k, int minMeanSamples);
WeightedDomainEnsemble multiscaleDomains(MatrixProperties matProp, float gammaMax, float gammaMin, 
    double stepSize, int k, int minMeanSamples, int areaCovered, std::vector<std::vector<double>> allMu);

DomainSet consensusDomains(WeightedDomainEnsemble& dEnsemble);

void outputDomains(DomainSet dSet, string fname, MatrixProperties matProp, int start, int hier);
int outputDomains(DomainSet dSet, string fname, MatrixProperties matProp, int hier, int myIndex, int pIndex);

int calCoverage(WeightedDomainEnsemble& dEnsemble, MatrixProperties matProp);
std::vector<double> getMu(std::shared_ptr<SparseMatrix> A, float gamma, int minMeanSamples);
void getVImatrix(WeightedDomainEnsemble& dEnsemble, double **VI_S);
double getVI(DomainSet dSet1, DomainSet dSet2, size_t N);

#endif // __ARMATUS_UTIL_HPP__
