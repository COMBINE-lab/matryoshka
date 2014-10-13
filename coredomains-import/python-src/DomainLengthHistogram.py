import pylab
import sys

dists = []
with open(sys.argv[1]) as f:
	for line in f:
		_, start, end, = line.rstrip().split()
		dists.append(int(end)-int(start))

pylab.hist(dists,25,log=True,range=(0,6e6))
pylab.savefig("domains-data/plots/chr1.length.hist.png")
