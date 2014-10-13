# parse their domains, our domains, compute overlap
import sys
#import numpy.bisect
#import numpy
#import igraph
import collections
import matplotlib.pyplot as plt
import matplotlib
import math

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
	VI_norm = VI / math.log(N)

	# print "\tH1, H2, 2MI, VI", H_1, H_2, 2*MI, VI

	#return N11 * 1.0 / (N11 + N01 + N10), (N11 + N00) * 1.0 / T, MI
	return N11 * 1.0 / (N11 + N01 + N10), MI, VI_norm



bingren = sys.argv[1]
dp_domains = sys.argv[2:-1]
input_chromo = sys.argv[-1]
step = 40000

print "------------------------------------------------"
print "Input chromo " + input_chromo

B = {}
avg_len = 0
with open(bingren, 'r') as f:
	for line in f:
		parts = line.strip().split()
		chromo = parts[0]
		start = parts[1]
		stop = parts[2]
		if chromo != input_chromo: continue
		if not (chromo in B): B[chromo] = []
		B[chromo].append( Domain(int(start) / step, int(stop)/ step ) )
		avg_len += int(stop) - int(start)

#print "Avg B.R. domain length, in bs", avg_len * 1.0 / len([ [(d.end - d.start) for d in D] for D in B.values()])

D_res = {}
avg_len = 0
for file_name in dp_domains:
	parts = file_name.split('.')
	res = parts[-1]
	if 'alpha' in res: 
		res = 1
	elif len(res) == 5:
		res = int(res[:2]) * 0.01
	elif len(res) == 4:
		res = int(res[:1]) * 0.1
	D_res[res] = []
	with open(file_name, 'r') as f:
		# parse filename, get resolutions
		for line in f:
			parts = line.strip().split()
			chromo = parts[0]
			start = parts[1]
			stop = parts[2]
			if chromo != input_chromo: continue
			D_res[res].append( Domain(int(start)/ step, int(stop)/step ) )
			avg_len += int(stop) - int(start)

#print "Avg our domain length, in bs", avg_len * 1.0 / len([ (d.end - d.start) for d in D.values() ] )


overlapChrom = {}
brCoveredByUs = {}
usCoveredByBR = {}
Jacc = {}
MI = {}
VI = {}


total_br_len = 0
N = max( [d.end for d in B[input_chromo] ] )
N = max (N, max( [ max([d.end for d in d_lists]) for d_lists in D_res.values() ] ) )

for domain in B[input_chromo]:
	total_br_len += domain.end - domain.start

for res, D in D_res.iteritems():
	print "Resolution", res
	total_overlap = 0
	for domain in B[input_chromo]:
		for our_d in D:
			if (domain.start <= our_d.start and our_d.start < domain.end) or (domain.start <= our_d.end and our_d.end < domain.end) or (our_d.start <= domain.start and domain.end < our_d.end):
				total_overlap += min(domain.end, our_d.end) - max(domain.start, our_d.start)					

	j, mi, vi = jaccard(B[input_chromo], D, N+1)

	overlapChrom[res] = total_overlap * 100.0 / N
	brCoveredByUs[res] = total_overlap * 100.0 / total_br_len
	usCoveredByBR[res] = total_overlap * 100.0 / sum( [our_d.end+1-our_d.start for our_d in D ] )
	Jacc[res] = j * 100.0
	MI[res] = mi
	VI[res] = vi

####################################
# save data
####################################
fname = "similarities."+input_chromo+".data"
with open(fname, 'w') as f:
	f.write("Resolution\n")
	Z = sorted( [(k,v) for k,v in overlapChrom.iteritems() ], key=lambda x: x[0] )
	X = [k for k,v  in Z]
	Y = [v for k,v  in Z]
	f.write( "\t".join( map(str, X) ) + "\n" )

	f.write("Overlap\n")
	f.write( "\t".join( map(str, X) ) + "\n" )

	f.write("brCoveredByUs\n")
	Z = sorted( [(k,v) for k,v in brCoveredByUs.iteritems() ], key=lambda x: x[0] )
	Y = [v for k,v  in Z]
	f.write( "\t".join( map(str, X) ) + "\n" )

	f.write("usCoveredByBR\n")
	Z = sorted( [(k,v) for k,v in usCoveredByBR.iteritems() ], key=lambda x: x[0] )
	Y = [v for k,v  in Z]
	f.write( "\t".join( map(str, X) ) + "\n" )

	f.write("Jaccard\n")
	Z = sorted( [(k,v) for k,v in Jacc.iteritems() ], key=lambda x: x[0] )
	Y = [v for k,v  in Z]
	f.write( "\t".join( map(str, X) ) + "\n" )

	f.write("MI\n")
	Z = sorted( [(k,v) for k,v in MI.iteritems() ], key=lambda x: x[0] )
	Y = [v for k,v  in Z]
	f.write( "\t".join( map(str, X) ) + "\n" )

	f.write("VI\n")
	Z = sorted( [(k,v) for k,v in VI.iteritems() ], key=lambda x: x[0] )
	Y = [v for k,v  in Z]
	f.write( "\t".join( map(str, X) ) + "\n" )	
print "Data saved to", fname


####################################
#
# plot things
#
####################################
plt.clf()
font = {'family' : 'normal',
        'size'   : 20}
matplotlib.rc('font', **font)

plt.xlabel("$\gamma$, resolution parameter")
ymin = 100
Z = sorted( [(k,v) for k,v in overlapChrom.iteritems() ], key=lambda x: x[0] )
X = [k for k,v  in Z]
Y = [v for k,v  in Z]
ymin = min(ymin, min(Y))
plt.plot(X, Y, '-',label='overlap')

# Z = sorted( [(k,v) for k,v in brCoveredByUs.iteritems() ], key=lambda x: x[0] )
# X = [k for k,v  in Z]
# Y = [v for k,v  in Z]
# ymin = min(ymin, min(Y))
# plt.plot(X, Y, '-', label='BRcoveredByUs')

# Z = sorted( [(k,v) for k,v in usCoveredByBR.iteritems() ], key=lambda x: x[0] )
# X = [k for k,v  in Z]
# Y = [v for k,v  in Z]
# ymin = min(ymin, min(Y))
# plt.plot(X, Y, '-', label='usCoveredByBR')

Z = sorted( [(k,v) for k,v in Jacc.iteritems() ], key=lambda x: x[0] )
X = [k for k,v  in Z]
Y = [v for k,v  in Z]
ymin = min(ymin, min(Y))
plt.plot(X, Y, '-', label='jaccard')

# Z = sorted( [(k,v) for k,v in AdjRand.iteritems() ], key=lambda x: x[0] )
# X = [k for k,v  in Z]
# Y = [v for k,v  in Z]
# ymin = min(ymin, min(Y))
# plt.plot(X, Y, '-', label='Adjusted Rand')
#plt.ylim([ymin-1, 101])

# Z = sorted( [(k,v) for k,v in MI.iteritems() ], key=lambda x: x[0] )
# X = [k for k,v  in Z]
# Y = [v*10 for k,v  in Z]
# ymin = min(ymin, min(Y))
# plt.plot(X, Y, '-', label='mutual information, 10X')

Z = sorted( [(k,v) for k,v in VI.iteritems() ], key=lambda x: x[0] )
X = [k for k,v  in Z]
Y = [v*100 for k,v  in Z]
ymin = min(ymin, min(Y))
plt.plot(X, Y, '-', label='VI, 100X')

plt.legend()
# plt.title(input_chromo)
figname = "overlap_br_ours_" + input_chromo + ".pdf"
plt.savefig(figname)
print "Figure saved to", figname
#plt.show()



