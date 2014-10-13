# plot all intervals for a single chromo
import os
import sys
import collections
import matplotlib.pyplot as plt
import matplotlib
import math

Domain = collections.namedtuple("Domain", ['start', 'end'])


################################################
#
#
#
################################################

def parseBingRenDomains(path, chromo, dataname=""):
	print "Parsing " + dataname
	B = []
	avg_len = 0
	with open(path, 'r') as f:
		for line in f:
			chro, start, stop = line.strip().split()
			if chro == chromo:
				B.append( Domain( int(start), int(stop)  ) )
				avg_len += int(stop) - int(start)
	print "Avg B.R. domain length, in bs", avg_len * 1.0 / len(B)
	return B

################################################
#
#
#
################################################
def parseMultiResDomains(paths, chromo, step):
	domains_res = {}
	print "Parsing our domains"
	for f_name in paths:
		parts = f_name[:-3].split(".")
		a = parts[-1]
		#assert(chro == chromo)
		if len(a) == 1:
			a = int(a) * 0.1
		elif len(a)==2:
			a = int(a) * 0.01
		elif 'alpha' in a:
			a = 1.0
		domains_res[a] = []
		with open(f_name, 'r') as f_in:
			for line in f_in:
				parts = line.strip().split()
				if len(parts) == 2:
					start = parts[0]
					end = parts[1]
				else:
					start = parts[1]
					end = parts[2]
				domains_res[a].append( Domain(int(start), int(end)) )
	
	#sorted_items = sorted([(k,v) for k,v in domains_res.iteritems()], key=lambda x: x[0] )
	#print [y[0] for y in sorted_items[:10] ]
	#print map(len,  [y[1] for y in sorted_items] )
	return domains_res


################################################
#
#
#
################################################
chromo = sys.argv[1]
consensus = sys.argv[2]
bing_domains = sys.argv[3]
our_multi_res_domains = sys.argv[4:-1] # a directory
step = int(sys.argv[-1])

consensus_domains = parseBingRenDomains(consensus, chromo, 'consensus')
b_domains = parseBingRenDomains(bing_domains, chromo, 'bing ren')
multi_dom = parseMultiResDomains(our_multi_res_domains, chromo, step)

min_abs = 0
max_abs = 6190

x_r = 100
#for i in xrange( int(math.ceil(max_abs * 1.0 / x_r) ) ):
for i in xrange( 1 ):
	print "------------------------------"
	print "Piece", i+1
	low_x = (i * x_r + x_r) * step
	high_x = 0
	plt.clf()
	# plot consensus
	for D in consensus_domains:
		if i * x_r <= D.start and D.start < i * (x_r + 1):
			if D.end > high_x: high_x = D.end
			if D.start < low_x: low_x = D.start
			plt.plot( [(D.start+1) , (D.end-1)], [1.05, 1.05], 'r', lw=2)
		# else:
			# print "not plotted", D

	# plot bing ren
	for D in b_domains:
		if i * x_r <= D.start and D.start < i * (x_r + 1):
			if D.end > high_x: high_x = D.end
			if D.start < low_x: low_x = D.start
			#plt.plot( [(D.start+1) * step, (D.end-1) * step], [1.01, 1.01], 'g')
			plt.plot( [(D.start+1), (D.end-1)], [1.1, 1.1], 'g', lw=2)

	# plot multiple resolutions
	for res, domains in multi_dom.iteritems():
		if res > 0.10:
			print "RESOLUTION", res
			for D in domains:
				if i * x_r <= D.start or D.start < i * (x_r + 1):
					if D.end > high_x: high_x = D.end
					if D.start < low_x: low_x = D.start
					#plt.plot( [ (D.start+1) * step, (D.end-1) * step], [res, res], 'b')
					plt.plot( [ (D.start+1), (D.end-1) ], [res, res], 'k', lw=2)
	#plt.xlim([0,6182])
	locs = [0] + [ (j+2) * 5 * 10**5 for j in xrange(7)]
	# print locs
	# plt.xticks(locs, ['0', '1Mb', '1.5Mb', '2Mb', '2.5Mb', '3Mb', '3.5Mb', '4Mb'])
	plt.xlabel("genomic position")
	plt.ylabel("$\gamma$, resolution parameter")
	#plt.xlim([low_x * step , x_r * step])
	font = {'family' : 'normal',
        'size'   : 20}
	matplotlib.rc('font', **font)
	# plt.xlim([low_x , x_r*step ])
	plt.xlim([ 0, 10000000 ])
	print low_x, x_r
	plt.ylim([0.1,1.15])
	fname = chromo + ".piece" + str(i+1) + "." + "bing_ours.pdf"
	plt.savefig(fname)
	print "Saved figure to", fname
	# plt.show()



