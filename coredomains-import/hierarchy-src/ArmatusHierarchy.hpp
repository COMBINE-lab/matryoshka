#ifndef ARMATUS_HIERARCHY_HPP
#define ARMATUS_HEIRARCHY_HPP

#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>

using std::map;
using std::vector;
using std::pair;
using std::string;
using std::max;
using std::min;
using std::ifstream;

struct Domain {
    int64_t begin, end;
    int64_t length() const { return end - begin; }
};
//using Domain = pair<int64_t, int64_t>;

using DomainSet = vector<Domain>;

DomainSet readDomains(char * fname) {
    ifstream domainFile;
    domainFile.open(fname);

    string chrom;
    Domain d;
    DomainSet D;

    while (domainFile >> chrom >> d.begin >> d.end)
       D.push_back(d); 

    return D;
}

int64_t domIsectSize(Domain a, Domain b) {
    return max(static_cast<int64_t>(0), min(a.end, b.end) - max(a.begin, b.begin) );
}

int64_t domUnionSize(Domain a, Domain b, int64_t isectSize) {
    if (isectSize > 0) 
       return max(a.end, b.end)-min(a.begin, b.begin);
    else
       return (a.end - a.begin) + (b.end - b.begin);
}

DomainSet getDifferentDomains(Domain d, DomainSet & D, double diffCutoff) {
    DomainSet diffDomains;

    for (auto e : D) {
        auto isectSize = domIsectSize(d, e);
        auto unionSize = domUnionSize(d, e, isectSize);
        auto percentDiff = 1-static_cast<double>(isectSize)/unionSize; 

        //cout << percentDiff << "\t" << isectSize << "\t" << unionSize << endl;
    
        if (percentDiff > diffCutoff)
            diffDomains.push_back(e);    
    }

    return diffDomains;
}


double containment(Domain d, DomainSet & D, double diffCutoff) {
    auto diffDomains = getDifferentDomains(d, D, diffCutoff); 
    int64_t maxOverlapSize = 0;

    for (auto e : diffDomains) {
        //cout << domIsectSize(d, e) << endl;
        maxOverlapSize = max(domIsectSize(d, e), maxOverlapSize);
    }

    return static_cast<double>(maxOverlapSize)/d.length();
}

double hierarchicaliness(DomainSet & D, double diffCutoff) {
    double h = 0;

    for (auto d : D) {
        //cout << containment(d, D, diffCutoff) << endl;
        h += containment(d, D, diffCutoff);
    }

    h *= 1/static_cast<double>( D.size() );

    return h;
}

double hierarchicaliness2(DomainSet & D, double diffCutoff) {
    size_t total_pairs = 0;
    size_t num_contained = 0;
    for (size_t i = 0; i < D.size(); i++) {
        for (size_t j = i+1; j < D.size(); j++) {
            auto isectSize = domIsectSize(D[i], D[j]);
            auto unionSize = domUnionSize(D[i], D[j], isectSize);
            auto percentDiff = 1-static_cast<double>(isectSize)/unionSize; 
            if (percentDiff > diffCutoff && isectSize > 0) {
                if (isectSize == D[i].length() or isectSize == D[j].length()) {
                    num_contained++;
                }
                total_pairs++;
            }
        }
    }
    return static_cast<double>(num_contained)/total_pairs;
}


#endif // ARMATUS_HIERARCHY_HPP
