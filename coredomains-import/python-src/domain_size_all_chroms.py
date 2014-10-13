# get min, max, avg domain sizes across different resolutions
import sys
import matplotlib.pyplot as plt
import matplotlib
import collections

Domain = collections.namedtuple("Domain", ['start', 'end'])

################################################
#
#
#
################################################

def parseBingRenDomains(path):
	print "Parsing bing ren"
	B = {}
	with open(path, 'r') as f:
		for line in f:
			chromo, start, stop = line.strip().split()
			if not (chromo in B): B[chromo] = []
			B[chromo].append( Domain( int(start) / step, int(stop) /step ) )
	avg = {}
	total_sum = 0
	total_len = 0
	for chromo in sorted(B.keys()):
		total_sum += sum ( [d.end - d.start for d in B[chromo] ] )
		total_len += len(B[chromo])
		a = sum ( [d.end - d.start for d in B[chromo] ] ) * 1.0 / len(B[chromo])
		print "Avg B.R. domain length,", chromo, "\t", a, "\t", a * step
		avg[chromo] = a
	print "Compare", sum(avg.values() ) / len(avg.values() ) * step, total_sum * 1.0 / total_len * step
	return B

################################################
#
#
#
################################################
def parseMultiResDomains(paths, step):
	domains_chro = {}
	print "Parsing our domains"
	for f_name in paths:
		parts = f_name[:-3].split(".")
		chromo = parts[1]
		if not (chromo in domains_chro ):
			domains_chro[chromo] = {}

		a = parts[-1]
		#assert(chro == chromo)
		if len(a) == 1:
			a = int(a) * 0.1
		elif len(a)==2:
			a = int(a) * 0.01
		elif 'alpha' in a:
			a = 1.0
		domains_chro[chromo][a] = []
		with open(f_name, 'r') as f_in:
			for line in f_in:
				parts = line.strip().split()
				if len(parts) == 2:
					start = parts[0]
					end = parts[1]
				else:
					start = parts[1]
					end = parts[2]
				domains_chro[chromo][a].append( Domain(int(start) / step, int(end) / step) )
	
	#sorted_items = sorted([(k,v) for k,v in domains_res.iteritems()], key=lambda x: x[0] )
	#print [y[0] for y in sorted_items[:10] ]
	#print map(len,  [y[1] for y in sorted_items] )
	return domains_chro

################################################
#
#
#
################################################
def plotSizes(BR_cnt, BR_avg, Gamma, Avg, Min, Max, Cnt):
	plt.subplot(211)
	for chromo in Avg.keys():
		plt.plot(Gamma, Avg[chromo], 'b-', Gamma, Max[chromo], 'r-', Gamma, Min[chromo], 'g-', alpha=0.3)
		plt.plot( [min(Gamma), max(Gamma)], [BR_avg[chromo], BR_avg[chromo] ], 'm-', alpha=0.3)
	plt.xlabel('$\gamma$, resolution parameter')
	plt.ylabel('avg domain size, in 40Kb')
	plt.yscale('log')
	# plt.grid(True)

	plt.subplot(212)
	for chromo in Cnt.keys():
		plt.plot(Gamma, Cnt[chromo], 'b-', alpha=0.3)
		plt.plot( [min(Gamma), max(Gamma)], [BR_cnt[chromo], BR_cnt[chromo] ], 'm-', alpha=0.3)
	plt.ylabel('number of domains')
	plt.xlabel('all chromosomes')
	plt.yscale('log')
	f_name = "domain_sizes_all.pdf"
	plt.savefig(f_name)
	#plt.show()
	print "Saved to", f_name



################################################
#
#
#
################################################
def plotSizesAvgOverChromos(BR_cnt, BR_avg, Gamma, Avg, Min, Max, Cnt):
	plt.subplot(211)
	font = {'family' : 'normal',
        'size'   : 20}
	matplotlib.rc('font', **font)

	avg_avg = []
	max_avg = []
	min_avg = []
	BR_avg_avg = []
	cnt_avg = []
	num_chromo = len(Avg)
	for i in xrange(len(Gamma)):
		g = Gamma[i]
		avg_avg.append( sum ( [res[i] for chromo, res in Avg.iteritems() ] ) / num_chromo )
		max_avg.append( sum ( [res[i] for chromo, res in Max.iteritems() ] ) / num_chromo )
		min_avg.append( sum ( [res[i] for chromo, res in Min.iteritems() ] ) / num_chromo )
		cnt_avg.append( sum ( [res[i] for chromo, res in Cnt.iteritems() ] ) / num_chromo )
	print avg_avg
	print max_avg
	print min_avg

	plt.plot(Gamma, avg_avg, 'b-', Gamma, max_avg, 'r-', Gamma, min_avg, 'g-')
	# plt.plot(Gamma, avg_avg, 'b-', alpha=0.7)

	BR_avg_avg = sum( [data for chromo, data in BR_avg.iteritems()] ) / len(BR_avg)
	plt.plot( [min(Gamma), max(Gamma)], [BR_avg_avg, BR_avg_avg ], 'm-', alpha=0.7)

	# plt.xlabel('$\gamma$, resolution parameter')
	plt.ylabel('size, in 40Kb')
	plt.yscale('log')
	# plt.grid(True)

	plt.subplot(212)
	plt.plot(Gamma, cnt_avg, 'b-')
	BR_cnt_avg = sum( [data for chromo, data in BR_cnt.iteritems()] ) / len(BR_cnt)
	plt.plot( [min(Gamma), max(Gamma)], [BR_cnt_avg, BR_cnt_avg ], 'm-')
	plt.ylabel('domain count')
	# plt.xlabel('all chromosomes')
	plt.xlabel('$\gamma$, resolution parameter')
	plt.yscale('log')
	f_name = "domain_sizes_all.pdf"
	plt.savefig(f_name)
	#plt.show()
	print "Saved to", f_name


#
# Main
#
binren = sys.argv[1]
dp_domains = sys.argv[2:]
step = 40000
b_domains = parseBingRenDomains(binren)
multi_dom = parseMultiResDomains(dp_domains, step)

br_cnt = {chromo: len(domains) for (chromo, domains) in b_domains.iteritems() }
br_avg_s = {chromo: sum( [ (d.end+1 - d.start) for d in b_domains[chromo]] ) * 1.0 / br_cnt[chromo] for chromo in br_cnt.keys() }

# calculate sizes
# average per chromosme, per resolution
Gamma = []
Avg = {}
Min = {}
Max = {}
Cnt = {}

#sort by gamma
doneOnce = False
for chrom, resolutions in multi_dom.iteritems():
	Avg[chrom] = []
	Min[chrom] = []
	Max[chrom] = []
	Cnt[chrom] = []
	resolutions = sorted( resolutions.items(), key=lambda x: x[0] )
	for g, domains in resolutions:
		if not doneOnce:
			Gamma.append(g)
		lens = [d.end+1 - d.start for d in domains]
		Avg[chrom].append( sum(lens) * 1.0 / len (domains) )
		Min[chrom].append( min(lens) )
		Max[chrom].append( max(lens) )
		Cnt[chrom].append( len(domains) )
	doneOnce = True

#print Min
# Plot
plotSizesAvgOverChromos(br_cnt, br_avg_s, Gamma, Avg, Min, Max, Cnt)





