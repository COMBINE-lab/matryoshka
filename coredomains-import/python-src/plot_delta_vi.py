import numpy as np
import sys
import matplotlib.pyplot as plt
import matplotlib
from matplotlib.colors import LinearSegmentedColormap

data_path = sys.argv[1]

M = np.loadtxt(data_path)
G = np.arange(0.0,1,0.05)
print G, len(G)
VI = [0]
for i in xrange(len(M) - 1):
	# VI.append( VI[-1] + M[i, i+1] )
	VI.append( M[i, i+1] )
print len(VI)

plt.clf()
plt.ylim([0,5])
plt.plot(G, VI)
fname = data_path + "_diff.pdf"
plt.savefig(fname)
print "Saved as", fname
plt.show()