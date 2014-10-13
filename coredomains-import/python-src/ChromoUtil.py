# things used uniformly by many modules :)

import collections
import gzip
import matplotlib.pylab as plt
import numpy as np
import math

Domain = collections.namedtuple("Domain", ["start", "end"])

############################################################
# given a filename for human domains, return a resolution
# example: domains.chr1.nij.comb.40kb.matrix.gz.alpha=0.05txt
############################################################
def parseHumanDomainsFileName(fname):
	tail = fname.strip().split('.')[-1]
	# print tail
	tail = tail.split('=')[-1]
	# print tail
	gamma = tail[:-3]
	if len(gamma) == 1:
		if gamma == '1':
			gamma = float(gamma)
		else:
			gamma = float(gamma) * 0.1
	elif len(gamma) == 2:
		gamma = float(gamma) * 0.01
	return gamma


############################################################
# parse the chromo lengths file
############################################################
def parseLengths(path):
	chromoLens = {}
	with open(path, 'r') as f_in:
		for line in f_in:
			chro, L = line.strip().split()
			if chro in ('X', 'Y', 'M'):
				chromoLens[chro] = int(L)
			else:
				chromoLens[int(chro)] = int(L)
	return chromoLens


#############################################
##
##
##
#############################################
def parseDomains(path, input_chromo):
	# print "parsing " + path
	B = []
	avg_len = 0
	with open(path, 'r') as f:
		for line in f:
			parts = line.strip().split()
			if len(parts) == 2:
				chromo = 'chr1'
				start = parts[0]
				stop = parts[1]
			elif len(parts) >= 3:
				chromo = parts[0]
				start = parts[1]
				stop = parts[2]
			#print chromo, input_chromo
			if chromo == input_chromo:
				B.append( Domain(int(start), int(stop) ) )
				avg_len += int(stop) - int(start)
	# print "Avg domain length, in bs", avg_len * 1.0 / len(B)
	return B


def parseBRDomains(path):
	# print "parsing " + path
	B = {}
	with open(path, 'r') as f:
		for line in f:
			parts = line.strip().split()
			if parts[0] == 'chrX':
				chromo = 23
			elif parts[0] == 'chrY':
				chromo = 24
			elif parts[0] == 'chrM':
				chromo = 25
			else:
				chromo = int(parts[0][3:])
			start = parts[1]
			stop = parts[2]
			if not (chromo in B):
				B[chromo] = []
			B[chromo].append( Domain(int(start), int(stop) ) )

	# print "Avg domain length, in bs", avg_len * 1.0 / len(B)
	return B


#############################################
##
##
##
#############################################
def parseMatrix(path):
	print "\tParsing matrix..."
	# f = gzip.open(path, 'rb')
	# file_content = f.read()
	# f.close()
	f = gzip.GzipFile(path, 'rb')
	lines = []
	for line in f:
		parts = line.strip().split("\t")
		lines.append( map(float, parts[3:]) )
	# create a matrix - each row is a 40kb fragment
	M = np.array(lines)
	#print M
	print "\tMatrix size", len(M)
	return M