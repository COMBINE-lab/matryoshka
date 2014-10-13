40000# parse their domains, our domains, compute overlap
import sys
#import numpy.bisect
import numpy as np
#import igraph
import collections
import matplotlib.pyplot as plt
import math
from CoreDomain import jaccard, Domain

#
# Main
#
print "Calculating self-similarity between our domains at different resolutions"
dp_domains = sys.argv[1:-1]
chrom = sys.argv[-1]
step = 40000
print "-------------- ", chrom, " ------------------"
print len(dp_domains), "domain sets"

D_res = {}
print "Parsing domains..."
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
	# print "\t", res
	with open(file_name, 'r') as f:
		# parse filename, get resolutions
		for line in f:
			parts = line.strip().split()
			chromo = parts[0]
			start = parts[1]
			stop = parts[2]
			D_res[res].append( Domain(int(start)/ step, int(stop)/step ) )
			avg_len += int(stop) - int(start)

N = 0
N = max (N, max( [ max([d.end for d in d_lists]) for d_lists in D_res.values() ] ) )

K = len(dp_domains)
Jacc_S = np.zeros( (K, K) )
MI_S = np.zeros( (K, K) )
VI_S = np.zeros( (K, K) )

res = sorted( [(k,v) for k,v in D_res.iteritems()], key=lambda x:x[0] )
for i in xrange(len(res)):
	print "Calculating pairwise similarities, res", res[i][0]
	for j in xrange(i, len(res)):
		# print "Calculating pairwise similarities, res", res[i][0], res[j][0]
		jac, mi, vi = jaccard(res[i][1], res[j][1], N+1)
		# if i == j: print "\t", mi
		Jacc_S[i,j] = jac
		Jacc_S[j][i] = jac
		MI_S[i][j] = mi
		MI_S[j][i] = mi
		VI_S[i][j] = vi
		VI_S[j][i] = vi


# print "Jaccard matrix"
# print Jacc_S
# print "MI matrix"
# print MI_S
# print "VI matrix"
# print VI_S

plt.clf()
plt.imshow(Jacc_S,interpolation='nearest', cmap='Greens')
plt.colorbar()
# plt.title("Jaccard similarity across domains at different resolutions, " + chrom)
fname = "jaccard_our_" + chrom + ".pdf"
plt.savefig(fname)
dname = "jaccard_our_" + chrom + ".data"
np.savetxt(dname, Jacc_S)
print "Saved jaccar matrix to", fname, "data in", dname

plt.clf()
#plt.imshow(MI_S,interpolation='nearest', cmap='Greys')
plt.imshow(MI_S,interpolation='nearest', cmap='Blues')
plt.colorbar()
# plt.title("MI across domanis at different resolutions, " + chrom)
fname = "mi_" + chrom + ".pdf"
plt.savefig(fname)
dname = "mi_our_" + chrom + ".data"
np.savetxt(dname, MI_S)
print "Saved mi to", fname, "data in", dname

plt.clf()
#plt.imshow(MI_S,interpolation='nearest', cmap='Greys')
plt.imshow(VI_S,interpolation='nearest', cmap='Oranges')
plt.colorbar()
# plt.title("MI across domanis at different resolutions, " + chrom)
fname = "vi_" + chrom + ".pdf"
plt.savefig(fname)
dname = "vi_our_" + chrom + ".data"
np.savetxt(dname, VI_S)
print "Saved VI to", fname, "data in", dname

