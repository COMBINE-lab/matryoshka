# plot the % of genome covered by domains at different resolutions (per one chromosome)

import sys
import matplotlib.pylab as plt
import gzip
import numpy as np
import math
import os
import ChromoUtil as CU

PREFIX = "/Users/cmulynxoid/Dropbox/domains-data/IMR90/domains.chr"
SUFFIX = ".nij.comb.40kb.matrix.gz.alpha="

CONSENSUS_PREFIX = "/Users/cmulynxoid/Dropbox/domains-data/IMR90/chr{0}.consensus.txt"

def coverage(domains, totalLen):
	s = 0
	end_max = 0
	for D in domains:
		s += D.end - D.start
		if end_max < D.end:
			end_max = D.end

	if end_max > totalLen:
		totalLen = end_max
	return s * 1.0 / totalLen


def avgDomSize(domains):
	total_len = 0
	for d in domains:
		total_len += d.end - d.start
	return total_len / len(domains)


def main(argv):
	# print argv
	# chromo = int(argv[0])
	lengthsFile = argv[0]
	L = CU.parseLengths(lengthsFile)
	BR_path = argv[1]
	# domainsGamma = argv[2:]

	BR_chr = CU.parseBRDomains(BR_path)
	BR_coverage = [coverage(D, L[ c ]) for c, D in BR_chr.iteritems() if c < 23 ]
	BR_avg = sum(BR_coverage) / len(BR_coverage)
	print "BR avg coverage", np.mean(BR_coverage), 'std', np.std(BR_coverage)
	print BR_coverage

	num_chromo = 22

	consensus_coverage = []

	C = {i+1: { } for i in xrange(num_chromo)}
	avg_coverage = []
	for chromo in C.keys():
		# for path in domainsGamma:
		print 'Chromo', chromo
		avg_dom_size = []

		consensus_domains = CU.parseDomains(CONSENSUS_PREFIX.format(chromo), 'chr'+str(chromo) )
		consensus_coverage.append( (consensus_domains, L[chromo]) )
		coverage
		for g in xrange(20):
		# for g in xrange(3,4):
			gamma = 0.05 * (g+1)
			print '\tResolution', gamma
			if gamma == 1:
				gamma = int(gamma)
			path = PREFIX + str(chromo) + SUFFIX + str(gamma) +"txt"
			# print path
			domains = CU.parseDomains(path, 'chr' + str(chromo) )
			avg_dom_size.append( avgDomSize(domains) )
			C[chromo][gamma] = coverage(domains, L[chromo])
			avg_coverage.append( C[chromo][gamma] )

	print 'Our avg', np.mean(avg_coverage), 'std', np.std(avg_coverage)
	print 'Our consensus avg', np.mean(consensus_coverage), 'std', np.std(consensus_coverage)
	print consensus_coverage

	# calculate average per gamma
	plt.clf()
	AVG = {0.05 * (i+1) : 0 for i in xrange(20)}
	for chromo, data in C.iteritems():
		for gamma, cov in data.iteritems():
			AVG[gamma] += cov
	flat = sorted(AVG.items(), key=lambda x : x[0])
	X = [f[0] for f in flat]
	Y = [f[1] / num_chromo for f in flat]
	print X
	print Y

	plt.ylim([0,1])
	plt.xlim([-0.05, 1.05])
	plt.plot(X, Y)
	plt.xlabel("resolution $\gamma$")
	plt.ylabel("% of genome covered by domains")
	plt.plot([0,1], [BR_avg, BR_avg], 'g-')
	# for br in BR_coverage:
		# plt.plot([0,1], [br, br], 'g-')
	

	# plot
	'''
	for chromo, data in C.iteritems():
		flat = sorted(data.items(), key=lambda x : x[0])
		# print chromo, flat
		X = [f[0] for f in flat]
		Y = [f[1] for f in flat]
		plt.plot(X, Y, label='chr' + str(chromo) )
		plt.ylim([0,1.05])
		plt.xlim([-0.05, 1.05])
	# 	
	plt.legend()
	'''
	picname = "avg-genome-coverage-all-chroms.pdf"
	plt.savefig(picname)
	print 'Saved plot to', picname
	plt.show()
	

if __name__ == "__main__":
	main(sys.argv[1:])