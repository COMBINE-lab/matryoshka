import random
import math
import collections
import itertools
from collections import namedtuple
import numpy as np
from bx.intervals.intersection import IntervalTree
from bx.intervals.intersection import Interval as bxInterval

chroms_human = map(str, range(1, 23))
chroms_mouse = map(str, range(1, 20))

Domain = collections.namedtuple("Domain", ["start", "end"])

def cumsum(it):
    total = 0
    for x in it:
        total += x[1]
        yield (x[0], total)


class domain:
    "Basic domain reading and ops"
    def __init__(self, fields):
        chrom, start, end = fields
        if chrom.find("chr") == -1:
            self.chrom = chrom
        else:
            self.chrom = chrom[3:]
        self.start = int(start)
        self.end = int(end)

    def len(self):
        return self.end-self.start

    def interval(self):
        return (self.start, self.end)

    def __str__(self):
        return "chr{0}\t{1}\t{2}".format(self.chrom, self.start, self.end)


def read_domains(fname, chrom):
    "Read all domains for a particular chromosome from the Dixon file format"
    domains = []
    with open(fname) as f:
        for line in f:
            d = domain(line.rstrip().split()[0:3])
            if d.chrom == chrom:
                domains.append(d)
    return sorted(domains, key=lambda d: d.end)


def shuffle_domains_rob(doms, chromlen):
    """
    Goal: shuffle domain and non-domain regions so that they
    do not overlap with one another

    Their file format has the endpoint overlapping by exactly
    one point with the start as a convention.  I continue with
    this convention.
    """
    import itertools

    doms = sorted(doms, key=lambda x: x.start)

    chrom = doms[0].chrom
    dlens = []
    ndstr = 'non-domain'
    dstr = 'domain'

    # If we dont start with a domain, begin with a non-domain
    if doms[0].start != 0:
        dlens.append((ndstr, doms[0].start))

    for dcur, dnext in itertools.izip(doms, doms[1:]):
        dlens.append((dstr, dcur.len()))
        if not dcur.end >= dnext.start:
            dlens.append((ndstr, dnext.start - dcur.end))

    # Append the last domain
    dlens.append((dstr, doms[-1].len()))

    # If there is still room left on the chromosome, append a non-domain
    if chromlen > doms[-1].end:
        dlens.append((ndstr, chromlen - doms[-1].end))

    newlens = list(dlens)
    random.shuffle(newlens)

    randomDoms = []
    chrBase = 0
    for dstat, dlen in newlens:
        if dstat == dstr:
            randomDoms.append(domain([chrom, chrBase, chrBase + dlen]))
        chrBase += dlen

    return randomDoms


def shuffle_domains(doms, chromlen):
    """
    Goal: shuffle domain and non-domain regions so that they
    do not overlap with one another

    Their file format has the endpoint overlapping by exactly
    one point with the start as a convention.  I continue with
    this convention.
    """

    chrom = doms[0].chrom
    dlens = []
    ndstr = 'non-domain'
    dstr = 'domain'
    # If we dont start with a domain, begin with a non-domain
    if doms[0].start != 1:
        dlens.append((ndstr, doms[0].start))

    # For every domain we observe except the last
    for i in range(len(doms)-1):
        d = doms[i]
        # Append the domain length labeled as 'domain' to the list
        dlens.append((dstr, d.len()))
        # If the next domain isn't directly adjacent, append a non-domain len
        if(doms[i].end != doms[i+1].start):
            dlens.append((ndstr, doms[i+1].start-doms[i].end))
    # Append the last domain
    dlens.append((dstr, doms[-1].len()))

    # If there is still room left on the chromosome, append a non-domain
    if chromlen > doms[-1].end:
        dlens.append((ndstr, chromlen-doms[-1].end))

    newlens = list(dlens)
    random.shuffle(newlens)

    endpoints = list(cumsum(newlens))
    sdomains = []
    lastendpoint = 0
    for dtype, endpoint in endpoints:
        if dtype == 'domain':
            sdomains.append(domain([chrom, lastendpoint, endpoint]))
        lastendpoint = endpoint
    return sdomains



def jaccard(D1, D2, N):
    #print len(D1), len(D2), N
    arr1 = [0 for i in xrange(N)]
    for d1 in D1:
        frag_d1 = set( [i for i in xrange(d1.start, d1.end+1 ) ] )
        for e in frag_d1:
            arr1[e] = 1

    arr2 = [0 for i in xrange(N)]
    for d2 in D2:
        frag_d2 = set( [i for i in xrange(d2.start, d2.end+1 ) ] )
        for e in frag_d2:
            arr2[e] = 1

    N11 = [ arr1[i] & arr2[i] for i in xrange(N) ]
    N01 = [ arr1[i] & ~arr2[i] for i in xrange(N) ]
    N10 = [ ~arr1[i] & arr2[i] for i in xrange(N) ]

    T = N * (N-1) / 2
    N11 = sum(N11)
    N01 = sum(N01)
    N10 = sum(N10)
    N00 = T - N11 - N01 - N10

    # mutual information
    # calculate total length
    MI = 0
    minD = min( min( [d.start for d in D1]) , min([d.start for d in D2]))
    maxD = max( max( [d.end for d in D1] ) , max([d.end for d in D2]))
    L = maxD - minD + 1
    # print "Len is", L, minD, maxD
    
    # create a collection of domains and inter-domains
    start = minD
    D1_plus = []
    # print D1
    # print minD
    for d1 in D1:
        if start < d1.start:
            D1_plus.append( Domain(start, d1.start-1) )
            # print "added", D1_plus[-1]
        D1_plus.append(d1)
        start = d1.end+1
    if d1.end < maxD:
        D1_plus.append( Domain(d1.end+1, maxD) )
    # print "\tNew lengths1", len(D1_plus), len(D1)

    # create a collection of domains and inter-domains
    start = minD
    D2_plus = []
    for d2 in D2:
        if start < d2.start:
            D2_plus.append( Domain(start, d2.start-1) )
        D2_plus.append(d2)
        start = d2.end+1
    if d2.end < maxD:
        D2_plus.append( Domain(d2.end+1, maxD) )
    # print "\tNew lengths2", len(D2_plus), len(D2)

    # print D1_plus
    # print D2_plus

    p_xs = [ (d.end + 1 - d.start) * 1.0 / L for d in D1_plus]
    p_ys = [ (d.end + 1 - d.start) * 1.0 / L for d in D2_plus]
    for i in xrange(len(D1_plus)):
        d1 = D1_plus[i]
        p_x = p_xs[i]
        for j in xrange(len(D2_plus)):
            d2 = D2_plus[j]
            p_y = p_ys[j]
            overlap = min(d2.end, d1.end) + 1 - max(d1.start, d2.start)
            if overlap <= 0: continue
            p_xy = overlap * 1.0 / L
            MI += p_xy * math.log( p_xy / (p_x * p_y) )

    # VI
    H_1 = -sum( [p * math.log(p) for p in p_xs] )
    H_2 = -sum( [p * math.log(p) for p in p_ys] )
    VI = H_1 + H_2 - 2*MI

    # print "\tH1, H2, 2MI, VI", H_1, H_2, 2*MI, VI

    #return N11 * 1.0 / (N11 + N01 + N10), (N11 + N00) * 1.0 / T, MI
    return N11 * 1.0 / (N11 + N01 + N10), MI, VI

def overlap_size(a, b):
    "Return the size of the overlap of two intervals (a0,a1), (b0,b1)"
    return max(0, min(a[1], b[1]) - max(a[0], b[0]))


def ival(k):
    return (k.start, k.end)


# def VI(dk, dkp, n):
#     n = float(n)

#     def plogp(p):
#         if p == 0:
#             return 0
#         else:
#             return p*math.log(p)

#     def plogp_joint(pxy, px, py):
#         if pxy == 0:
#             return 0
#         else:
#             return pxy*math.log(pxy/(px*py))

#     def P(k):
#         return (k.end-k.start+1)/n

#     def Pj(k, kp):
#         return overlap_size(ival(k), ival(kp))/n

#     def H(dk):
#         return -sum([plogp(P(k)) for k in dk])

#     def I(dk, dkp):
#         return sum([plogp_joint(Pj(k, kp), P(k), P(kp))
#                     for k in dk for kp in dkp])

#     return H(dk) + H(dkp) - 2 * I(dk, dkp)


def read_chromlens(clenfile):
    "Read a chromosome lengths file and return a map from chrom -> len"
    clens = {}
    with open(clenfile) as f:
        for line in f:
            chrom, clen = line.rstrip().split()
            clens[chrom] = int(clen)
    return clens

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
    return -np.dot(ps, np.log(ps))
    #return -sum([p*math.log(p) for p in ps])


def mutualInformation(xs, ys, N):
    mi = 0.0
    px = [float(x.length) / N for x in xs]
    py = [float(y.length) / N for y in ys]

    T = IntervalTree()
    for i, x in enumerate(xs):
        T.insert_interval(bxInterval(x.start, x.end, value={'idx': i, 'interval': x}))

    for j, y in enumerate(ys):
        overlaps = T.find(y.start, y.end)
        for x in overlaps:
            joint = float(y.overlap(x.value['interval'])) / N
            i = x.value['idx']
            mi += joint * math.log(joint / (px[i] * py[j]))
    # for i, x in enumerate(xs):
    #     for j, y in enumerate(ys):
    #         overlap = x.overlap(y)
    #         if overlap > 0:
    #             joint = float(overlap) / N
    #             mi += joint * math.log(joint / (px[i] * py[j]))
    return mi


def variationOfInformation(dom1, dom2, N):
    dom1 = sorted(dom1, key = lambda x: x.start)
    dom2 = sorted(dom2, key = lambda x: x.start)
    start = min(dom1[0].start, dom2[0].start)
    stop = max(dom1[-1].end, dom2[-1].end)

    clusts1 = domainsToClusters(start, stop, dom1)
    clusts2 = domainsToClusters(start, stop, dom2)

    #N = stop - start
    px = np.array([float(x.length) / N for x in clusts1])
    py = np.array([float(x.length) / N for x in clusts2])
    return entropy(px) + entropy(py) - 2.0 * mutualInformation(clusts1, clusts2, N)
