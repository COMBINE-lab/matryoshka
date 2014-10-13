import sys
import matplotlib.pyplot as plt
import numpy as np

path = sys.argv[1]
X = np.array(1)
print "Parsing", path
with open(path) as f:
	for line in f:
		p = map(float, line.strip().split() )
		X = X + p

print "Read in", len(X), "data points"

print "Mean", np.mean(X), "Median", np.median(X)

# plot
print "Plotting..."
fig = plt.figure()
ax = fig.add_subplot(111)
# ax.yscale('log')
# ax.set_xscale('log')
plt.xlabel("Frequency")
plt.ylabel("Count")
n, bins, patches = ax.hist(X, 50, facecolor='green', alpha=0.75, log=True)
# print n
# print bins
figname = path + ".histogram.pdf"
plt.savefig(figname)
print "Figure saved to", figname

# plot the left part of the fig in detail
X[X > 200] = 0
Y = np.ma.masked_equal(X, 0)
Y.compressed()
print len(Y)
print "Mean", np.mean(Y), "Median", np.median(Y)

plt.clf()
fig = plt.figure()
ax = fig.add_subplot(111)
plt.xlabel("Frequency")
plt.ylabel("Count")
n, bins, patches = ax.hist(Y, 50, facecolor='green', alpha=0.75, log=True)
figname = path + ".left_histogram.pdf"
plt.savefig(figname)
print "Figure saved to", figname
