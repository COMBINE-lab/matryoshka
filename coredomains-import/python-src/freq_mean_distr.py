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
N = len(M)

mean = []
median = []
max_d = 20
d_detail = 5
some_vari = 0
keep = 0
d_vals = {}
D = [i for i in xrange(3, max_d+1)]
for d in D:
	print "Working on d={0}".format(d)
	sums = np.zeros(N-d) # sum for every single matrix of size d divided by d
	for i in xrange(N-d):
		sums[i] = M[i:i+d+1, i:i+d+1].sum() / d
	# if d == d_detail:
	# remove 0z fomr the sums
	sums = np.ma.masked_equal(sums,0)
	sums = sums.compressed()
	d_vals[d] = sums
	mean.append( np.mean(sums) )
	median.append( np.median(sums) )
	some_vari+=1

	# sums = sorted(sums)
	# print sums[len(sums) / 2]
	

# print mean
# print median

# plt.ylim([100,500])
plt.ylabel("Mean|median sum(f)/d at that d")
plt.xlabel("Domain size d")
plt.plot(D, mean, 'b-', label="mean")
plt.plot(D, median, 'g-', label="median")
for d, sums in d_vals.iteritems():
	plt.plot([d for i in xrange(len(d_vals[d]))], d_vals[d]-mean[d-3], 'r.', alpha=0.01)
plt.legend()
fname = sys.argv[1].split("/")[-1] + ".med_mean.pdf"
plt.savefig(fname)
print "Figure saved to", fname
# plt.show()


# plot the distribution of sums/d at d_vals
plt.clf()
fig = plt.figure()
ax = fig.add_subplot(111)
# plt.xlim([0,1000])
# plt.ylim([0,700])
n, bins, patches = ax.hist(d_vals[5], 50, facecolor='red', alpha=0.75)
ax.vlines(mean[5], 0, max(n), color='b')
ax.vlines(median[5], 0, max(n), color='g')
fname = sys.argv[1].split("/")[-1] + ".distro_d=" + str(d_detail) + ".pdf"
plt.savefig(fname)
plt.show()

# save this array to file
# fname = sys.argv[1].split("/")[-1] + ".nz.data"
# with open(fname, 'w') as f:
# 	for x in X:
# 		f.write(str(x) + " ")
# print "Condensed matrix saved to", fname