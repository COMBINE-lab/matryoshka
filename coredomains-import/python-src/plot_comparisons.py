# plot comparisons data

import numpy as np
import sys
import matplotlib.pyplot as plt
import matplotlib
from matplotlib.colors import LinearSegmentedColormap

data_path = sys.argv[1]
if len(sys.argv) > 2:
	colormap = sys.argv[2]
else:
	colormap = 'Oranges'
M = np.loadtxt(data_path)
# M = M + 1
# M = np.log(M)

cdict1 = {'red':   [(0.0, 1.0, 1.0),
					(0.05, 0.9, 0.9),
					# (0.1, 0.8, 0.8),
					(0.15, 0.7, 0.7),
                	(1.0, 0.0, 0.0)],

         'green': [(0.0, 1.0, 1.0),
         			(0.05, 0.9, 0.9),
         			# (0.1, 0.8, 0.8),
         			(0.15, 0.7, 0.7),
                	(1.0, 0.0, 0.0)],

         'blue':  [(0.0, 1.0, 1.0),
         			(0.05, 0.9, 0.9),
         			# (0.1, 0.8, 0.8),
         			(0.15, 0.7, 0.7),
                   (1.0, 0.0, 0.0)]
        }

colormap = LinearSegmentedColormap('WBLog', cdict1)
# plt.register_cmap(cmap=blue_red1)

plt.clf()
plt.xlabel("$\gamma$, resolution parameter")
# plt.xticks([i for i in xrange(0,1, 0.05)], [i for i in xrange(0,5)])
plt.xticks([i*4 + 1 for i in xrange(5) ], [0.2 * i + 0.1 for i in xrange(5)], )
plt.yticks([i*4 + 1 for i in xrange(5) ], [0.2 * i + 0.1 for i in xrange(5)], )
font = {'family' : 'normal',
        'size'   : 20}
matplotlib.rc('font', **font)
plt.imshow(M,interpolation='nearest', cmap=colormap)
plt.colorbar()
fname = data_path + ".pdf"
plt.savefig(fname)
print "Saved figure to", fname