"""

Usage: VisualizeDomains.py --cmap=<contact_map> --domains=<domains> [--chrom=<chrom>] [--chromlens=<clenfile>] [--res=<res>] [--out=<out>]

Options:
  --cmap=<contact_map>       The contact map (*C interaction file)
  --domains=<domains>        File containing domains
  --chromlens=<clenfile>     File containing chromosome lengths
  --chrom=<chrom>            Chromosome name (e.g. 1)
  --res=<res>                Data resolution [default: 40000]
  --out=<out>                Where result should be written
"""
from docopt import docopt
import numpy as np
import gzip
from matplotlib import pyplot as plt
from pylab import *
import sys
from CoreDomain import read_chromlens
import matplotlib.cm as cm


def main(opts):
    print(opts)
    res = int(opts['--res'])
    cmfile = gzip.open(opts['--cmap'])
    line = map(float, cmfile.readline().rstrip().split()[3:])
    n = len(line)

    N = n+1
    if '--chromlens' is None:
        clens = read_chromlens(opts['--chromlens'])
        N = max(n,clens[opts['--chrom']]/res)

    print(N)

    M = np.zeros((N, N), dtype=np.float)
    M[0, 0:n] = line
    for i, l in enumerate(cmfile):
        line = map(float, l.rstrip().split()[3:])
        M[i+1, 0:n] = line

    domainVal = np.log(1e50)
    eps = 1

    with open(opts['--domains'], 'rb') as ifile:
        for l in ifile:
            if l.rstrip().split()[0][3:] != opts['--chrom']: continue
            start, end = map(int, l.rstrip().split()[1:3])
            start /= res
            end /= res
            print N, start, end
            M[start, start:end+1] = domainVal
            M[start:end+1, start] = domainVal
            M[start:end+1, end+1] = domainVal
            M[end, start:end+1] = domainVal

    plt.imshow(np.log(M+eps), interpolation='nearest',cmap=cm.YlOrRd)
    ind = arange(N)[0:N:N/100]
    plt.xticks(ind,ind*res)
    plt.yticks(ind,ind*res)
    if ('--out' in opts):
        plt.savefig(opts['--out'])
    else:
        plt.show()

if __name__ == "__main__":
    options = docopt(__doc__, version="VisualizeDomains 1.0")
    main(options)
