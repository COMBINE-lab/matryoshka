"""

Usage: AnalyzeFeatures.py --domains=<domains> --feature=<feature> [--res=<res>] [--numControlBoundaries=<nc>] [--peak] [--background]

Options:
  --domains=<domains>            The domains file
  --feature=<feature>            The feature to plot
  --res=<res>                    Resolution of the bins [default: 10000]
  --background                   Visualize the background (within domain) signal
  --peak                         Interpret the input as a peak file (instead of signal)
  --numControlBoundaries=<nc>    Number of control domains (e.g. number of do)
"""
from docopt import docopt
import Features
import numpy as np
import matplotlib
from matplotlib import pyplot as plt
from bx.intervals.intersection import Interval, IntervalTree
import os

class Domain(object):

    def __init__(self, l):
        toks = l.rstrip().split()
        self.chrom = toks[0]
        self.start = int(toks[1])
        self.stop = int(toks[2])

    def center(self):
        return (self.start + self.stop) / 2

    def length(self):
        return self.stop - self.start

def overlaps(feature, start, end):
    if (feature.stop >= start and feature.stop < end) or (feature.start >= start and feature.start < end):
        return True
    else:
        return False

def getFeatPosRange(flist, domains, winDown):
    domains = sorted(domains, key=lambda x: x.stop)
    return flist[0].start, max(flist[-1].stop + 1, domains[-1].center() + winDown + 1)

def processPeaks(chrom, flist, domains, res, winDown):
    # Get the first and last feature positions
    # CODEREVIEW: We assume feature intervals don't overlap (or overlap a little)
    firstFeatPos, lastFeatPos = getFeatPosRange(flist, domains, winDown) #flist[0].start, flist[-1].stop+1

    # Vals will hold the feature counts along the chromosome
    vals = np.zeros(lastFeatPos)
    avgVals = np.zeros(lastFeatPos)

    for f in flist:
        # A peak gets assigned to all positions this peak overlaps
        vals[f.start: f.stop+1] += 1

    T = IntervalTree()
    for f in flist:
        T.insert_interval(Interval(f.start, f.stop))

    # For every 'res' length bin, compute the average # of peaks in this bin
    for idx in xrange(0, vals.shape[0] + res, res):
        maxIdx = min(idx + res, vals.shape[0])
        overlappingFeatures = T.find(idx, maxIdx)
        avgVals[idx: maxIdx] += len(overlappingFeatures)

    return avgVals, vals

def processSignal(chrom, flist, domains, res, winDown):
    # Get the first and last feature positions
    firstFeatPos, lastFeatPos = getFeatPosRange(flist, domains, winDown) #flist[0].start, flist[-1].stop+1

    # vals will hold the feature counts along the chromosome
    vals = np.zeros(lastFeatPos)
    valsInp = np.zeros(lastFeatPos)
    avgVals = np.zeros(lastFeatPos)

    for f in flist:
        # vals holds the 'foreground' signal
        vals[f.start: f.stop+1] += f.value
        # vals2 holds the input / 'background' signal
        valsInp[f.start: f.stop+1] += f.value2

    for idx in xrange(0, vals.shape[0] + res, res):
        maxIdx = min(idx + res, vals.shape[0])
        norm = 1.0 / (maxIdx - idx + 1)

        # vals[i] contains the total number of peaks occurring at location i.
        # To obtain the average for each [res]bp bin, we sum up the total
        # number of peaks in each entry within the bin and divide by the bin width.
        avg = None
        if valsInp[idx: maxIdx].sum() > 0.0:
            # The enrichment in this bin is the 
            avg = norm * np.log2(vals[idx: maxIdx].sum() / valsInp[idx: maxIdx].sum())
        else:
            avg = 0.0
        avgVals[idx: maxIdx] = avg

    return avgVals, vals



def main(opts):

    res = int(opts['--res'])
    isPeak = opts['--peak']
    # Read in the peaks and sort them
    feats = Features.broadPeakFileParser(opts['--feature']) if isPeak \
            else Features.parseWig(opts['--feature'])

    feats = sorted(feats, key=lambda x: x.chrom)
    
    import itertools

    # We'll look at a window from -500kb to +500kb centered
    # about the domain boundary and domain center
    winUp = -500000
    winDown = 500000

    # Holds the total counts in the windows around the area
    # of interest
    windowSumsBoundary = np.zeros(winDown - winUp)
    windowSumsCenter = np.zeros(winDown - winUp)
    numWindowsBoundary, numWinsCenter = 0, 0
    numBoundariesWithFeature, numDomainsWithFeature = 0, 0

    # Read the domains from file, and sort them
    allDomains = None
    with open(opts['--domains'], 'rb') as ifile:
        allDomains = [Domain(l) for l in ifile]

    # Group the domains by chromosome
    allDomains = sorted(allDomains, key=lambda x: x.chrom)
    numTotalDomains = len(allDomains)
    allDomains = {chrom: list(dlist) for chrom, dlist in itertools.groupby(allDomains, lambda x: x.chrom)}

    domainLengths = np.array([d.length() for dlist in allDomains.itervalues() for d in dlist])

    import scipy as sp
    import scipy.stats

    # We'll maintain separate signal averages for the lower, mid and upper tritiles
    dlpercentiles = [sp.stats.scoreatpercentile(domainLengths, p) for p in [25, 50, 75, 100]]
    windowSumsCenters = [np.zeros(winDown - winUp) for dlp in dlpercentiles]
    numWinsCenters = [0]*len(dlpercentiles)


    interDomainLengths = []  # CODEREVIEW: May not be used

    numControlPeaks = numTotalDomains
    if opts['--numControlBoundaries']:
        numControlPeaks = int(opts['--numControlBoundaries'])

    sampleRatio = float(numControlPeaks) / numTotalDomains
    print(sampleRatio)

    displayBackground = opts['--background']

    # Iterate over the features by chromosome
    for chrom, flist in itertools.groupby(feats, lambda x: x.chrom):

        # both the features and domains must be defined for this chromosome
        if chrom not in allDomains or chrom == "chrX":
            continue


        flist = list(flist) # groupby gives us a generator, we need a list
        flist = sorted(flist, key=lambda x: x.start)
        domains = sorted(allDomains[chrom], key=lambda x: x.start)

        print("Processing {}".format(chrom))

        signal, vals = processPeaks(chrom, flist, domains, res, winDown) if isPeak\
                       else processSignal(chrom, flist, domains, res, winDown)

        # Get the first and last feature positions
        firstFeatPos, lastFeatPos = getFeatPosRange(flist, domains, winDown) #flist[0].start, flist[-1].stop+1


        # CODEREVIEW: Assuming d1 < d2
        def isBoundary(d1, d2):
            return (d2.start - d1.stop) <= 400000

        def boundaryMidpoint(d1, d2):
            return (d2.start + d1.stop) / 2

        def isValidLocus(l):
            return l + winUp >= 0 and l + winDown < lastFeatPos

        domainBuffer = 20000
        numDomains = len(domains)

        import bisect
        import random
        for i, j in itertools.izip(xrange(numDomains), xrange(1, numDomains)):

            if random.random() > sampleRatio:
                continue

            d1, d2 = domains[i], domains[j]
            interDomainLengths.append(d2.start - d1.stop)

            if isBoundary(d1, d2):
                mid = boundaryMidpoint(d1, d2)
                if isValidLocus(mid):
                    # CODEREVIEW should be winup - windown
                    sig = np.zeros(1000000)
                    for idx in xrange(0, sig.shape[0] + res, res):
                        maxIdx = min(idx + res, sig.shape[0])
                        norm = 1.0 / (maxIdx - idx + 1)
                        sig[idx: maxIdx] = signal[(mid + winUp) + idx: (mid + winUp) + maxIdx]

                    windowSumsBoundary += sig
                    numWindowsBoundary += 1
                    numBoundariesWithFeature += 1 if vals[d1.stop: d2.start].sum() > 0 else 0

            # The middle of the domain
            if isValidLocus(d1.center()):
                sig = np.zeros(1000000)
                for idx in xrange(0, sig.shape[0] + res, res):
                    maxIdx = min(idx + res, sig.shape[0])
                    norm = 1.0 / (maxIdx - idx + 1)
                    sig[idx: maxIdx] = signal[(d1.center() + winUp) + idx: (d1.center() + winUp) + maxIdx]

                percentileIndex = bisect.bisect_left(dlpercentiles, d1.length())
                windowSumsCenters[percentileIndex] += sig
                numWinsCenters[percentileIndex] += 1

                windowSumsCenter += sig
                numWinsCenter += 1
                numDomainsWithFeature += 1 if vals[d1.start: d1.stop].sum() > 0 else 0

        print("Total boundaries                  : {}".format(numWindowsBoundary))
        print("Total boundaries/w >= 1 feature   : {}".format(numBoundariesWithFeature))
        print("Fraction of boundaries/w feature  : {}".format(float(numBoundariesWithFeature) / numWindowsBoundary))
        print("Total domains                     : {}".format(numWinsCenter))
        print("Total domains/w    >= 1 feature   : {}".format(numDomainsWithFeature))
        print("Fraction of domains/w feature     : {}".format(float(numDomainsWithFeature) / numWinsCenter))

    windowSumsBoundary /= numWindowsBoundary
    windowSumsCenter /= numWinsCenter

    # for i in xrange(len(windowSumsCenters)):
    #     windowSumsCenters[i] /= numWinsCenters[i]

    import scipy.integrate
    areaUnderBoundarySignal = scipy.integrate.trapz(windowSumsBoundary)
    areaUnderDomainSignal = scipy.integrate.trapz(windowSumsCenter)

    areaDifference = areaUnderBoundarySignal - areaUnderDomainSignal
    print("areaDifference = {}".format(areaDifference))

    halfRes = res/2
    sigLen = len(windowSumsBoundary)
    boundaryPlotPoints = windowSumsBoundary[halfRes:sigLen+halfRes:res]

    domainPlotPoints = windowSumsCenter[halfRes:sigLen+halfRes:res]

    # percentileDomainPlotPoints = [windowSumsCenters[i][halfRes:sigLen+halfRes:res] for i in xrange(len(windowSumsCenters))]

    font = {'family': 'normal',
            'size': 18}

    matplotlib.rc('font', **font)

    plt.plot(boundaryPlotPoints, linewidth=4, label="boundaries")
    plt.plot(domainPlotPoints, linewidth=4)
    # for i, pdp in enumerate(percentileDomainPlotPoints):
    #     plt.plot(pdp, linewidth=4, label="d_len <= {}".format(dlpercentiles[i]))
    # plt.legend()
    plt.gca().yaxis.set_major_locator(matplotlib.ticker.MaxNLocator(prune='lower'))
    plt.ylabel("Average # Peaks per 10kb")

    numPlotPoints = len(boundaryPlotPoints)
    plt.xticks([0, numPlotPoints / 2, numPlotPoints], ["-500kb", "boundary", "500kb"])

    dname = opts['--domains'].split(os.path.sep)[-1]
    fname = opts['--feature'].split(os.path.sep)[-1]
    plt.gcf().set_size_inches(10, 9)
    plt.savefig('{}_{}.pdf'.format(dname, fname))
    plt.show()


if __name__ == "__main__":
    opts = docopt(__doc__, version="AnalyzeFeatures v1.0")
    main(opts)
