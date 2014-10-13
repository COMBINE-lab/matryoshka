import itertools
from collections import namedtuple
from CoreDomain import Domain
import math

class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
        self.length = self.end - self.start

    def overlap(self, other):
        if (self.end >= other.start) and (other.end >= self.start):
            return min(self.end, other.end) - max(self.start, other.start)
        else:
            return 0


def domainsToClusters(start, end, doms):
    clusts = []
    if start < doms[0].start:
        clusts.append(Interval(start, doms[0].start))

    for d1, d2 in itertools.izip(doms, doms[1:]):
        clusts.append(Interval(d1.start, d1.end))
        clusts.append(Interval(d1.end, d2.start))

    clusts.append(Interval(doms[-1].start, doms[-1].end))

    if doms[-1].end < end:
        clusts.append(Interval(doms[-1].end, end))

    return clusts

def entropy(ps):
    return -sum([p*math.log(p) for p in ps])

def mutualInformation(xs, ys, N):
    mi = 0.0
    px = [float(x.length) / N for x in xs]
    py = [float(y.length) / N for y in ys]
    for i, x in enumerate(xs):
        for j, y in enumerate(ys):
            overlap = x.overlap(y)
            if overlap > 0:
                joint = float(overlap) / N
                mi += joint * math.log(joint / (px[i] * py[j]))
    return mi

def variationOfInformation(dom1, dom2):
    dom1 = sorted(dom1, key = lambda x: x.start)
    dom2 = sorted(dom2, key = lambda x: x.start)
    start = min(dom1[0].start, dom2[0].start)
    stop = max(dom1[-1].end, dom2[-1].end)

    clusts1 = domainsToClusters(start, stop, dom1)
    clusts2 = domainsToClusters(start, stop, dom2)

    N = stop - start
    px = [float(x.length) / N for x in clusts1]
    py = [float(x.length) / N for x in clusts2]
    return entropy(px) + entropy(py) - 2.0 * mutualInformation(clusts1, clusts2, N)
