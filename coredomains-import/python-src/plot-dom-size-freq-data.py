import sys
import matplotlib.pyplot as plt
import matplotlib
from pylab import *
import math
import numpy

data_files = sys.argv[1:-1]
print len(data_files)

BR_sizes = []
BR_freqs = []
our_sizes_t = []
our_freqs_t = []
per_gamma = { (int(i*0.01 * 100))/100.0 : {'freq':[], 'size': []} for i in xrange(5, 101, 5)}

for f in data_files: 
	print f
	with open(f, 'r') as f_in:
		lines = f_in.readlines()
		# print len(lines)
		BR_sizes.extend( map(int, lines[0].strip().split(", ") ) )
		BR_freqs.extend( map(float, lines[1].strip().split(", ") ) )
		for i in xrange(2, len(lines), 3):
			gamma = float(lines[i].strip())
			our_sizes = map(int, lines[i+1].strip().split(", ") )
			our_freqs = map(float, lines[i+2].strip().split(", ") )
			# filter!
			# sf = zip(our_sizes, our_freqs)
			# sf = [ (s,f) for s,f in sf if s < 20 ]
			# our_sizes, our_freqs = zip(*sf)		

			per_gamma[gamma]['freq'].extend( our_freqs)
			per_gamma[gamma]['size'].extend( our_sizes)
			our_sizes_t += our_sizes
			our_freqs_t += our_freqs

# filtering for our data
# sf = zip(our_sizes, our_freqs)
# sf = [ (s,f) for s,f in sf if s < 100 and f < 100 ]
# our_sizes, our_freqs = zip(*sf)

'''
plt.plot(our_sizes, our_freqs, 'k.', alpha=0.1, markersize=20, label="Our domains")
plt.plot(BR_sizes, BR_freqs, 'bD', alpha=0.1, markersize=20, label="B. Ren domains")
plt.xlabel('Domain size')
plt.ylabel('Mean frequency within domains')
plt.legend()
picname = "mean-freq-chr" + str(chromo) + ".pdf"
plt.savefig(picname)
print 'Saved plot to', picname
'''

minx = min(-1, min(min(our_sizes_t) , min(BR_sizes) ) )
maxx = max(max(our_sizes_t) , max(BR_sizes) )
miny = min(min(our_freqs_t) , min(BR_freqs) )
maxy = max(max(our_freqs_t) , max(BR_freqs) )

plt.clf()

fig = plt.figure()
ax = None
i_max = 8 # gamma_max = i_max * 0.05
for i in xrange(1, 8, 2):
	print (i+1)/2
	ax = fig.add_subplot(i_max/2, 2, i)
	g1 = int(0.05 * i * 100) / 100.0
	data = per_gamma[g1]
	ax.set_title('$\gamma$ = ' + str(g1))
	ax.loglog( BR_sizes, BR_freqs, 'bx', markersize=5, alpha=0.6)
	# if len(data['size']) < 50: 
		# A = 0.9
	# else: 
	A= 0.2
	ax.loglog( data['size'], data['freq'], 'go', markersize=5, alpha=A)
	# print len(data['size'])
	plt.xlim( [minx, maxx] )
	plt.ylim( [miny, maxy] )

	ax = fig.add_subplot(i_max/2, 2, i+1)
	g2 = int(0.05 * (i+1) * 100 ) / 100.0
	data = per_gamma[g2]
	# print len(data['size'])
	ax.set_title('$\gamma$ = ' + str(g2))
	ax.loglog( BR_sizes, BR_freqs, 'bx', markersize=5, alpha=0.6)
	# if len(data['size']) < 50: 
		# A = 0.9
	# else: 
		# A= 0.3
	ax.loglog( data['size'], data['freq'], 'go', markersize=5, alpha=A)
	plt.xlim( [minx, maxx] )
	plt.ylim( [miny, maxy] )

#fname = "mean-freq-us-BR-chr" + chromo + ".pdf"
#plt.savefig(fname)
#print "Saved double figure to", fname
# plt.show()

font = {'family' : 'normal',
        'size'   : 20}
matplotlib.rc('font', **font)

freqs = [f for V in per_gamma.values() for f in V['freq']]
print 'Was',len(freqs)
mu = np.mean(freqs)
median = np.median(freqs)
sigma = np.std(freqs)
print mu, median, sigma
freqs = filter(lambda x: x <= mu+4*sigma, freqs)
print 'Become',len(freqs)
plt.clf()
plt.xlabel('Mean frequency within domain')
plt.hist(freqs, bins=80, alpha=0.3, normed=True, label="Multiscale")
plt.hist(BR_freqs, bins=40, alpha=0.3, normed=True, label="Dixon et al.")
plt.legend()
plt.savefig("mean-freq-distr.pdf")
# plt.show()


sizes = [s*40 for V in per_gamma.values() for s in V['size']] 
BR_sizes = [s*40 for s in BR_sizes]

print 'Was', len(sizes)
mu = np.mean(sizes)
median = np.median(sizes)
sigma = math.sqrt(np.std(sizes))
# print mu, median, sigma
# sizes = filter(lambda x: x <= mu+10*sigma, sizes)
print np.mean(sizes), np.mean(BR_sizes)
# print np.mean(sizes) * 40, np.mean(BR_sizes) * 40
# print np.mean(sizes*40), np.mean(BR_sizes*40)
print np.std(sizes), np.std(BR_sizes)
# print np.std(sizes) * 40, np.std(BR_sizes) * 40
# print np.std(sizes * 40), np.std(BR_sizes*40)
print 'Become',len(sizes)



plt.clf()
plt.xlabel('Domain size, in 40Kb fragments')
plt.hist(sizes, bins=50, alpha=0.3, log=False, normed=True)
plt.hist(BR_sizes, bins=50, alpha=0.3, log=False, normed=True)
plt.savefig("dom-size-distr.pdf")
# plt.show()