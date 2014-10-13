# plot freq distributions
import sys
import matplotlib.pyplot as plt
import numpy as np
import gzip

# read in matrix
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

M = parseMatrix(sys.argv[1])
X = M.flatten()
print len(X)
X = np.ma.masked_equal(X,0)
X = X.compressed()
print len(X)
print X[:10], min(X), max(X)
# save this reduce array to file
fname = sys.argv[1].split("/")[-1] + ".nz.data"
with open(fname, 'w') as f:
	for x in X:
		f.write(str(x) + " ")
print "Condensed matrix saved to", fname