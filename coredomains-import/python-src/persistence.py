import glob
import sys
import CoreDomain
import argparse
import math
import pylab


def domainsLoop(chrom, prefix, cutoff):
    for fname in glob.glob("{1}/*chr{0}.*.alpha*".format(chrom, prefix)):

        alpha = float(fname.split("=")[1][0:-3])

        if alpha > cutoff:
            continue

        yield fname, alpha


def egodistance(d, D, N):
    ed = 0

    for e in D:
        ed += CoreDomain.variationOfInformation(d, e, N)/math.log(N)

    return ed/len(D)


def findMaxGamma(domlens, dist=80000):
    prevgamma = 0
    for gamma, dlens in sorted(domlens.items(), key=lambda x: x[0]):
        if pylab.median(dlens) <= dist:
            return prevgamma
        prevgamma = gamma
    return prevgamma


def persistence(a):
  # Track the persistence of a particular domain

    if a.organism == "mESC":
        chromlen = CoreDomain.read_chromlens("domains-data/chromlens.mm9.txt")[a.chrom]
    else:
        chromlen = CoreDomain.read_chromlens("domains-data/chromlens.txt")[a.chrom]

    persistence = {}
    domains = {}

    for fname, alpha in domainsLoop(a.chrom, a.prefix, a.cutoff):
        domains[alpha] = CoreDomain.read_domains(fname, a.chrom)

    domlens = {alpha: [d.len() for d in D] for alpha, D in domains.items()}
    if a.mediancutoff:
        a.cutoff = findMaxGamma(domlens)

    for fname, alpha in domainsLoop(a.chrom, a.prefix, a.cutoff):
        es = 1
        if a.egoscale:
            es = egodistance(domains[alpha], domains.values(), chromlen)

        with open(fname) as f:
            for line in f:
                fields = line.rstrip().split()
                chrom, start, end, score = fields
                dom = (int(start), int(end))
                if dom not in persistence:
                    persistence[dom] = 0
                persistence[dom] += es

    for dom, count in sorted(persistence.items(), key=lambda x: x[1]):
        if a.egoscale:
            count *= es
            persistence[dom] = count
        print "\t".join(map(str, [dom[0], dom[1], count, sys.argv[1]]))


    if a.plot:
        gammas, lens = zip(*domlens.items())

        pylab.scatter(gammas, map(pylab.mean, lens))
        pylab.axvline(a.cutoff, color='green', linewidth=5)
        pylab.show()


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('chrom')
    parser.add_argument('organism')
    parser.add_argument('cutoff', type=float)
    parser.add_argument('prefix')
    parser.add_argument('--egoscale', dest='egoscale', action='store_true')
    parser.add_argument('--mediancutoff', dest='mediancutoff', action='store_true')
    parser.add_argument('--resolution', type=int, default=40000)
    parser.add_argument('--plot', dest='plot', action='store_true')
    a = parser.parse_args()

    persistence(a)


if __name__ == "__main__":
    main()
