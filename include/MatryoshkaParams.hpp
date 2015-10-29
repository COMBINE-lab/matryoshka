/* 
    Authors: Darya Filippova, Geet Duggal, Rob Patro
    dfilippo | geet | robp @cs.cmu.edu
*/

#ifndef __MATRYOSHKA_PARAMS_HPP__
#define __MATRYOSHKA_PARAMS_HPP__

#include <memory>

#include <boost/numeric/ublas/symmetric.hpp>

#include "MatryoshkaUtil.hpp"

class MatryoshkaParams {
  using SymmetricMatrix = boost::numeric::ublas::symmetric_matrix<double, boost::numeric::ublas::upper>;
  public:
    explicit MatryoshkaParams(std::shared_ptr<SparseMatrix> _A, double _gamma, size_t Kp, int minMeanSamples);
    explicit MatryoshkaParams(std::shared_ptr<SparseMatrix> _A, double _gamma, size_t Kp, int minMeanSamples, std::vector<double> mu);
    void computeSumSigma_();
    void computeSumMu_();
    std::shared_ptr<SparseMatrix> A;
    SymmetricMatrix sums;
    size_t n;
    size_t K;
    size_t minMeanSamples;
    double gamma;
    std::vector<double> mu;
};

#endif // __MATRYOSHKA_PARAMS_HPP__
