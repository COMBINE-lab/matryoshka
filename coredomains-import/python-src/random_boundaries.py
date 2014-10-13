# read in hte domains, record the size of the inter-domain regions, randomly through them onto the chromosome
import sys
import collections
import numpy
import math

Domain = collections.namedtuple('Domain', ['start', 'end'])
step = 40000

def parseDomains(path, input_chromo):
	print "Parsing domains..."
	avg_len = 0
	domains = []
	with open(path, 'r') as f:
		# parse filename, get resolutions
		for line in f:
			parts = line.strip().split()
			chromo = parts[0]
			start = parts[1]
			stop = parts[2]
			domains.append( Domain(int(start)/ step, int(stop)/step ) )
			avg_len += int(stop) - int(start) + 1
	print "Avg domain length", avg_len * 1.0 / len(domains)
	return domains


def getRandomBoundaries(domains, N):
	# compute boundaries
	bound_lengths = []
	for i in xrange(len(domains)-1):
		bound_lengths.append( domains[i+1].start - domains[i].end )
		
	numpy.random.shuffle(bound_lengths)
	# throw at a random location on a chromo
	L = len(bound_lengths)
	indices = sorted( [ int(math.floor(f * N) ) for f in numpy.random.random(L) ] )

	boundaries = []
	for i in xrange(len(indices)):
		l = bound_lengths[i]
		boundaries.append( Domain(indices[i], indices[i] + bound_lengths[i]) )
	return boundaries

def getDomains(boundaries):
	domains = []
	start = 0
	for b in boundaries:
		domains.append( Domain(start, start+b.start) )
		start = start + b.end+1
	return domains

def main(argv):
	path = argv[0]
	input_chromo = argv[1]
	N = int(argv[2])
	domains = parseDomains(path, input_chromo)
	boundaries = getRandomBoundaries(domains, N)
	new_domains = getDomains(boundaries)

	fname = path.split("/")[-1]
	fname = ".".join( (fname.split('.')[:-1] ) ) + ".random_boundaries"
	with open(fname, 'w') as f:
		for b in new_domains:
			f.write("{0}\t{1}\t{2}\n".format(input_chromo, b.start * step, b.end * step) )
	print "Random boundaries saved to", fname


if __name__ == "__main__":
	main(sys.argv[1:])