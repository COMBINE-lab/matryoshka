#include <iostream>
#include "ArmatusHierarchy.hpp"

using namespace std;

int main(int argc, char ** argv) {
    auto D = readDomains(argv[1]);
    double diffCutoff = atof(argv[2]);
    cout << hierarchicaliness2(D, diffCutoff) << endl;
}
