/* 
    Authors: Darya Filippova, Geet Duggal, Rob Patro
    dfilippo | geet | robp @cs.cmu.edu
*/

#ifndef __MATRYOSHKA_DAG_HPP__
#define __MATRYOSHKA_DAG_HPP__

#include "MatryoshkaUtil.hpp"
#include "MatryoshkaParams.hpp"
#include <vector>

using namespace boost;
using namespace std;

class MatryoshkaDAG {
    private:
    MatryoshkaParams * params;
    std::vector<double> BI;
    double muBI;

    class SubProblem {
        public:
        double score;
        size_t backPointer;
        size_t backOptimalIndex;
        bool operator<( const SubProblem & other ) const {
           return score < other.score;
        }
        bool operator==( const SubProblem & other) const {
           return (score == other.score and
                   backPointer == other.backPointer and
                   backOptimalIndex == other.backOptimalIndex);
        }
    };

    public:

    using SubProbMatrix = vector<vector<SubProblem>>;
    SubProbMatrix OPT;
    SubProbMatrix OPTD;

    explicit MatryoshkaDAG(MatryoshkaParams &p, std::vector<double> BIp, double muBIp);
    
    double q(size_t k, size_t l);
    
    double s(size_t k, size_t l);

    void build();

    void computeTopK();

    DomainSet extractDomains(size_t i, float areaCovered);
    WeightedDomainEnsemble extractTopK(float areaCovered);
};

#endif // __MATRYOSHKA_DAG_HPP__
