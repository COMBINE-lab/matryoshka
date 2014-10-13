# inter-intra by genomic distance

import sys
import collections
import matplotlib.pylab as plt
import gzip
import numpy as np
import math
import os

Domain = collections.namedtuple("Domain", ["start", "end"])
STEP = 40000

#############################################
##
##
##
#############################################
def parseDomains(path, input_chromo):
	print "parsing " + path
	B = []
	avg_len = 0
	with open(path, 'r') as f:
		for line in f:
			parts = line.strip().split("\t")
			if len(parts) == 2:
				chromo = 'chr1'
				start = parts[0]
				stop = parts[1]
			elif len(parts) == 3:
				chromo = parts[0]
				start = parts[1]
				stop = parts[2]
			#print chromo, input_chromo
			if chromo == input_chromo:
				B.append( Domain(int(start) / STEP, int(stop) /STEP ) )
				avg_len += int(stop) - int(start) + 1
	print "Avg domain length, in bs", avg_len * STEP * 1.0 / len(B)
	return B


#############################################
##
##
##
#############################################
def parseMultiResDomains2(paths, chromo, step):
	domains_res = {}
	print "Parsing our domains"
	for f_name in paths:
		parts = f_name.split("/")[-1].split(".")
		chro = parts[1]
		a = parts[-1][:-3]
		if len(a) == 1:
			a = int(a) * 0.1
		elif len(a) == 2:
			a = int(a) * 0.01
		else:
			a = 1 # 'alpha=1'
		domains_res[a] = []
		with open(f_name, 'r') as f_in:
			for line in f_in:
				parts2 = line.strip().split()
				start = parts2[1]
				end = parts2[2]#, end = line.strip().split()
				domains_res[a].append( Domain(int(start) / step, int(end) / step) )
				#print domains_res[a][-1]
	return domains_res



#############################################
##
##
##
#############################################
def parseMatrix(path):
	print "Parsing matrix..."
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
	print "Matrix size", len(M)
	return M


def isInDomain( interval, domains):
	i = interval[0]
	j = interval[1]
	for d in domains:
		if (d.start <= i) and (j <= d.end): 
			return True
	return False


def getInterIntraDistances(domains, matrix):
	genomic = [i for i in xrange(5) ] # * 40Kb
	inter = []
	intra = []
	N = len(matrix)
	for g in genomic:
		intra_freq = []
		inter_freq = []
		for i in xrange(N-g):
			if isInDomain( (i, i+g) , domains): intra_freq.append(matrix[i, i+g])
			else: inter_freq.append(matrix[i, i+g])
		inter.append( sum(inter_freq) / len(inter_freq) )
		if len(intra_freq) == 0:
			intra.append(0)
		else:
			print g, len(intra_freq)
			intra.append( sum(intra_freq) / len(intra_freq) )
	return inter, intra, genomic


#############################################
##
##
##
#############################################
def main(argv):
	bingPath = argv[0]
	ourPath = argv[1:-2] # paths to all domains we want to read
	matrixPath = argv[-2] # bing ren matrix
	input_chromo = argv[-1]

	#bingDomains = parseDomains(bingPath, input_chromo)
	multi_dom = parseMultiResDomains2(ourPath, input_chromo, STEP)
	originalMatrix = parseMatrix(matrixPath)

	# save intermediate results to a file
	# can plot separately afterwards! yay
	f_out = open("inter_intra.data","w")
	for res, domains in multi_dom.iteritems():
		print "Computing curve at resolution", res
		inter, intra, genomic = getInterIntraDistances(domains, originalMatrix)
		f_out.write("Resolution: " + str(res) + "\n")
		f_out.write("\t".join( map(str, inter) ) + "\n")
		f_out.write("\t".join( map(str, intra) ) + "\n")
	f_out.write("\t".join( map(str, genomic) ) + "\n")
	f_out.close()
	

if __name__ == "__main__":
	main(sys.argv[1:])