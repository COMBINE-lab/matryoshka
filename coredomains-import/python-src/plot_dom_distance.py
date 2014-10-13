import matplotlib.pylab as plt
import matplotlib
import sys

data_path = sys.argv[1]
input_chromo = sys.argv[2]
STEP = 40000
#
# Parse output file with data
#
'''
		f_out.write("Resolution: " + res + "\n")
		f_out.write("\t".join(inter) + "\n")
		f_out.write("\t".join(intra) + "\n")
	f_out.write("\t".join(genomic) + "\n")
'''
resolutions = {}
bingren = {}
with open(data_path, 'r') as f:
	indx = 0
	for line in f:
		if "BingRen" in line:
			indx = 0
			br = True
		elif "Resolution" in line:
			br = False
			_, res = line.strip().split()
			current_res = float(res)
			resolutions[current_res] = {}
			indx = 0
		elif indx == 0: # inter data
			if br:
				bingren['inter'] = map(float, line.strip().split() )
			else:
				resolutions[current_res]['inter'] = map(float, line.strip().split() )
			indx+=1
		elif indx == 1: # intra data
			if br:
				bingren['intra'] = map(float, line.strip().split() )
			else:
				resolutions[current_res]['intra'] = map(float, line.strip().split() )
			indx+=1
		else: # genomic dist
			genomic = map(int, line.strip().split() )
			print genomic
			
genomic = [g * STEP for g in genomic]
plt.clf()
locs = [ (i * 5 * 10**5) for i in xrange(5)]
print locs
plt.xticks(locs, ['0', '.5Mb', '1Mb', '1.5Mb', '2Mb'])
plt.xlabel("Genomic distance")
plt.ylabel("Mean interaction frequency")

font = {'family' : 'normal',
        'size'   : 20}
matplotlib.rc('font', **font)

ind = 2
for res, data in resolutions.iteritems():
	if res >= 0.8: continue # the consensus cutoff
	print "Plotting resolution", res
	plt.plot(genomic[ind:], data['inter'][ind:], 'r-', lw=2, alpha=0.2)
	plt.plot(genomic[ind:], data['intra'][ind:], 'b-', lw=2, alpha=0.2)
# draw bing ren
plt.plot(genomic[ind:], bingren['inter'][ind:], 'k-', lw=2, alpha=0.7)
plt.plot(genomic[ind:], bingren['intra'][ind:], 'k-', lw=2, alpha=0.7)
plt.plot(genomic[ind:], bingren['inter'][ind:], 'r-', lw=4, alpha=0.5, label="inter-domain", ls="--")
plt.plot(genomic[ind:], bingren['intra'][ind:], 'b-', lw=4, alpha=0.5, label="intra-domain", ls="--")
plt.legend()

fig_name = "inter_intra_dists_" + input_chromo +".pdf"
plt.savefig(fig_name)
print "Saved to " + fig_name
plt.show()