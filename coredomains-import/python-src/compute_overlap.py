40000# parse their domains, our domains, compute overlap
import sys
#import numpy.bisect
#import numpy
#import igraph
import collections
import matplotlib.pyplot as plt

Domain = collections.namedtuple("Domain", ["start", "end"])

def jaccard(D1, D2, N):
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
	return N11 * 1.0 / (N11 + N01 + N10), (N11 + N00) * 1.0 / T



bingren = sys.argv[1]
dp_domains = sys.argv[2]
#input_chromo = sys.argv[3]
step = 40000

B = {}
avg_len = 0
with open(bingren, 'r') as f:
	for line in f:
		parts = line.strip().split()
		chromo = parts[0]
		start = parts[1]
		stop = parts[2]
		#if chromo != input_chromo: continue
		if not (chromo in B): B[chromo] = []
		B[chromo].append( Domain(int(start) / step, int(stop)/ step ) )
		avg_len += int(stop) - int(start)

#print "Avg B.R. domain length, in bs", avg_len * 1.0 / len([ [(d.end - d.start) for d in D] for D in B.values()])

D = {}
avg_len = 0
with open(dp_domains, 'r') as f:
	# parse filename, get
	for line in f:
		parts = line.strip().split()
		chromo = parts[0]
		start = parts[1]
		stop = parts[2]
		#if chromo != input_chromo: continue
		if not(chromo in D): D[chromo] = []
		D[chromo].append( Domain(int(start)/ step, int(stop)/step ) )
		avg_len += int(stop) - int(start)

#print "Avg our domain length, in bs", avg_len * 1.0 / len([ (d.end - d.start) for d in D.values() ] )


overlapChrom = {}
brCoveredByUs = {}
usCoveredByBR = {}
Jacc = {}
AdjRand = {}

for chromo in sorted(B.keys()):
	print "Chromo", chromo
	if not (chromo in D):
		print chromo + " not in our domains"
		continue
	total_overlap = 0
	total_br_len = 0
	avg_overlap = 0
	N = max( [d.end for d in B[chromo] ] )
	N = max (N, max( [d.end for d in D[chromo] ] ) )
	for domain in B[chromo]:
		total_br_len += domain.end - domain.start
		for our_d in D[chromo]:
			if (domain.start <= our_d.start and our_d.start < domain.end) or (domain.start <= our_d.end and our_d.end < domain.end) or (our_d.start <= domain.start and domain.end < our_d.end):
				total_overlap += min(domain.end, our_d.end) - max(domain.start, our_d.start)					

	print "\t % overlap on this chromo", total_overlap * 100.0 / N
	print "\t % of BR covered by us", total_overlap * 100.0 / total_br_len
	print "\t % of us covered by BR", total_overlap * 100.0 / sum( [our_d.end+1-our_d.start for our_d in D[chromo] ] )
	j, adj_r = jaccard(B[chromo], D[chromo], N+1)
	print "\t Jaccard", j
	print "\t adj rand", adj_r # accuracy

	overlapChrom[chromo] = total_overlap * 100.0 / N
	brCoveredByUs[chromo] = total_overlap * 100.0 / total_br_len
	usCoveredByBR[chromo] = total_overlap * 100.0 / sum( [our_d.end+1-our_d.start for our_d in D[chromo] ] )
	Jacc[chromo] = j * 100.0
	AdjRand[chromo] = adj_r * 100.0

####################################
#
# plot things
#
####################################
plt.clf()
plt.xlabel("chromosome")
ymin = 100
Z = sorted( [(k,v) for k,v in overlapChrom.iteritems() ], key=lambda x: float(x[0][3:]) )
X = [k[3:] for k,v  in Z]
Y = [v for k,v  in Z]
ymin = min(ymin, min(Y))
plt.plot(X, Y, '-',label='overlaps')
Z = sorted( [(k,v) for k,v in brCoveredByUs.iteritems() ], key=lambda x: int(x[0][3:]) )
X = [k[3:] for k,v  in Z]
Y = [v for k,v  in Z]
ymin = min(ymin, min(Y))
plt.plot(X, Y, '-', label='BRcoveredByUs')
Z = sorted( [(k,v) for k,v in usCoveredByBR.iteritems() ], key=lambda x: int(x[0][3:]) )
X = [k[3:] for k,v  in Z]
Y = [v for k,v  in Z]
ymin = min(ymin, min(Y))
plt.plot(X, Y, '-', label='usCoveredByBR')
Z = sorted( [(k,v) for k,v in Jacc.iteritems() ], key=lambda x: int(x[0][3:]) )
X = [k[3:] for k,v  in Z]
Y = [v for k,v  in Z]
ymin = min(ymin, min(Y))
plt.plot(X, Y, '-', label='jaccard')
Z = sorted( [(k,v) for k,v in AdjRand.iteritems() ], key=lambda x: int(x[0][3:]) )
X = [k[3:] for k,v  in Z]
Y = [v for k,v  in Z]
ymin = min(ymin, min(Y))
plt.plot(X, Y, '-', label='Adjusted Rand')
plt.ylim(ymin-1, 101)
plt.xlim([0,24])
plt.legend()
plt.savefig("overlap_br_ours.pdf")
plt.show()