# import math
# import random
import pylab

pylab.rcParams['font.size'] = 20
pylab.rcParams['xtick.major.size'] = 5
pylab.rcParams['ytick.major.size'] = 5
#pylab.rcParams['font.family'] = 'arial'
from CoreDomain import *

def VI(da,db,n):
    res = 40000
    dap = [Domain(d.start/res, d.end/res) for d in da]
    dbp = [Domain(d.start/res, d.end/res) for d in db]
    def maxend(dap): return max([d.end for d in dap])
    maxdom = max(maxend(dap),maxend(dbp))+1
    return jaccard(dap,dbp,max(n/res+1,maxdom))[2]

def main():
    # import sys
    # import glob

    chroms = pylab.arange(1, 23)
    chromlens = read_chromlens("domains-data/chromlens.txt")
    UsVSBingy = []
    UsVSRandom = {}
    for chrom in map(str, chroms):
        dixonDomains = read_domains("domains-data/dixon/IMR90/combined/total.combined.domain", chrom)
        ourDomains = read_domains("domains-data/IMR90/chr{0}.consensus.txt".format(chrom), chrom)
        UsVSBingy.append(VI(dixonDomains, ourDomains, chromlens[chrom]))
        for i in xrange(25):
            if i not in UsVSRandom: UsVSRandom[i] = []
            UsVSRandom[i].append(VI(shuffle_domains(dixonDomains, chromlens[chrom]), ourDomains, chromlens[chrom]))
        print UsVSBingy[-1], UsVSRandom[0][-1]

    #width=.35
    #pylab.bar(chroms, UsVSBingy, width, color='b',alpha=.5)
    #pylab.bar(chroms+width, UsVSRandom, width, color='r',alpha=.5)
    pylab.plot(chroms, UsVSBingy, 'o', color='b', markersize=10)
    for i in xrange(25):
        pylab.plot(chroms, UsVSRandom[i], 'd', color='r', markersize=10)
    pylab.legend(["Multiscale vs. Dixon et al.", "Multiscale vs. Random"])
    pylab.ylabel("Variation of Information")
    pylab.xlabel("Chromosome")
    ax = pylab.gcf().get_axes()[0]
    ax.set_xticks(chroms)
    ax.set_xticklabels(map(str, chroms))
    pylab.grid()
    pylab.show()


if __name__ == "__main__":
    main()
