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

def parseBingRenDomains(path, chromo):
	print "Parsing bing ren"
	B = []
	avg_len = 0
	with open(path, 'r') as f:
		for line in f:
			chro, start, stop = line.strip().split()
			if chro == chromo:
				B.append( Domain( int(start) / step, int(stop) /step ) )
				avg_len += int(stop) - int(start)
	print "Avg B.R. domain length, in bs", avg_len * 1.0 / len(B)
	return B

################################################
#
#
#
################################################
def parseMultiResDomains(paths, chromo, step):
	domains_res = {}
	print "Parsing our domains"
	for f_name in paths:
		parts = f_name[:-3].split(".")
		a = parts[-1]
		#assert(chro == chromo)
		if len(a) == 1:
			a = int(a) * 0.1
		elif len(a)==2:
			a = int(a) * 0.01
		elif 'alpha' in a:
			a = 1.0
		domains_res[a] = []
		with open(f_name, 'r') as f_in:
			for line in f_in:
				parts = line.strip().split()
				if len(parts) == 2:
					start = parts[0]
					end = parts[1]
				else:
					start = parts[1]
					end = parts[2]
				domains_res[a].append( Domain(int(start) / step, int(end) / step) )
	
	#sorted_items = sorted([(k,v) for k,v in domains_res.iteritems()], key=lambda x: x[0] )
	#print [y[0] for y in sorted_items[:10] ]
	#print map(len,  [y[1] for y in sorted_items] )
	return domains_res

################################################
#
#
#
################################################
def plotSizes(chromo, br_cnt, br_avg_size, Gamma, Avg, Min, Max, Cnt):
	font = {'family' : 'normal',
        'size'   : 14}
	matplotlib.rc('font', **font)

	plt.subplot(211)
	plt.plot(Gamma, Avg, 'b-', Gamma, Max, 'r-', Gamma, Min, 'g-')
	plt.plot( [min(Gamma), max(Gamma)], [br_avg_size, br_avg_size], 'm-', ls='dotted')
	
	plt.ylabel('domain size, in 40Kb')
	plt.yscale('log')
	# plt.grid(True)

	plt.subplot(212)
	plt.plot(Gamma, Cnt, 'b-')
	plt.plot( [min(Gamma), max(Gamma)], [br_cnt, br_cnt], 'm-', ls='dotted')
	plt.ylabel('domain count')
	#plt.xlabel('chromosome ' + chromo[3:])
	plt.xlabel('$\gamma$, resolution parameter')
	plt.yscale('log')
	f_name = "domain_sizes_" + chromo + ".pdf"
	plt.savefig(f_name)
	#plt.show()
	print "Saved to", f_name


#
# Main
#
chromo = sys.argv[1]
binren = sys.argv[2]
dp_domains = sys.argv[3:]
step = 40000
b_domains = parseBingRenDomains(binren, chromo)
multi_dom = parseMultiResDomains(dp_domains, chromo, step)

br_cnt = len(b_domains)
br_avg_s = sum( [ (d.end+1 - d.start) for d in b_domains] ) * 1.0 / br_cnt

# calculate sizes
Gamma = []
Avg = []
Min = []
Max = []
Cnt = []

Z = sorted(multi_dom.items(), key=lambda x: x[0])
for g, domains in Z:
	Gamma.append(g)
	lens = [d.end+1 - d.start for d in domains]
	Avg.append( sum(lens) / len (domains) )
	Min.append( min(lens) )
	Max.append( max(lens) )
	Cnt.append( len(domains) )

#print Min
# Plot
plotSizes(chromo, br_cnt, br_avg_s, Gamma, Avg, Min, Max, Cnt)





