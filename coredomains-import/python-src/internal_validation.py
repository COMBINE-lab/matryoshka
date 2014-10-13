import sys
import collections
import matplotlib.pylab as plt
import gzip
import numpy as np
import math
import os

Domain = collections.namedtuple("Domain", ["start", "end"])


#############################################
##
##
##
#############################################
def parseDomains(path, input_chromo):
	print "parsing " + path
	B = []
	avg_len = 0
	with open(path, 'r') as f:
		for line in f:
			parts = line.strip().split("\t")
			if len(parts) == 2:
				chromo = 'chr1'
				start = parts[0]
				stop = parts[1]
			elif len(parts) == 3:
				chromo = parts[0]
				start = parts[1]
				stop = parts[2]
			#print chromo, input_chromo
			if chromo == input_chromo:
				B.append( Domain(int(start), int(stop) ) )
				avg_len += int(stop) - int(start)
	print "Avg domain length, in bs", avg_len * 1.0 / len(B)
	return B


#############################################
##
##
##
#############################################
def breakLines(long_list):
	last = 0
	lines = []
	for i in xrange(len(long_list)):
		if long_list[i] == '\n':
			#yield long_list[last + 3:i]
			convo = ['0' if t == '' else t for t in long_list[last + 3:i-1] if t != '\t']
			print convo
			lines.append( map(int, convo ) )
			last = i+2
	return lines


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



#############################################
##
##
##
#############################################
def calculateNonZeroInDomains(domains, matrix, step):
	nzs = []
	lens = []
	for dom in domains:
		startIndex = int(math.floor(dom.start / step) )
		stopIndex = int ( math.floor(dom.end / step) )
		lens.append(stopIndex - startIndex + 1)
		nz = 0
		for i in xrange(startIndex, stopIndex+1):
			for j in xrange(i+1, stopIndex+1):
				if matrix[i,j] > 0: nz+=1
		if nz == 0:
			print "no density", startIndex, stopIndex
		nzs.append(nz)
	return nzs, lens



#############################################
##
##
##
#############################################
def calculateSumsInDomains(domains, matrix, step):
	sums = []
	for dom in domains:
		startIndex = int(math.floor(dom.start / step) )
		stopIndex = int ( math.floor(dom.end / step) )
		s = 0
		for i in xrange(startIndex, stopIndex+1):
			for j in xrange(i, stopIndex+1):
				s+= matrix[i,j]
		sums.append(s)
	return sums


#############################################
##
##
##
#############################################
def calculateDensity(lengths, sums):
	assert(len(lengths) == len(sums))
	densities = []
	for i in xrange( len(lengths) ):
		densities.append( sums[i] / lengths[i] )
	return densities


#############################################
##
##
##
#############################################
def calculateEdgeRatio(lengths, nzs):
	assert(len(lengths) == len(nzs))
	ratios = []
	for i in xrange( len(lengths) ):
		ratios.append( nzs[i] * 1.0 /  (lengths[i] * (lengths[i] - 1) / 2 ) )
	#print ratios[:5]
	#print nzs[:5]
	#print lengths[:5]
	return ratios


#############################################
##
##
##
#############################################
def calculateCohesion(edgesInDomains, domains, matrix, step):
	cohesion = []
	E_in = []
	E_out = []
	N = len(matrix)
	assert(len(edgesInDomains) == len(domains))
	for i in xrange(len(domains)):
		dom = domains[i]
		startIndex = int(math.floor(dom.start / step) )
		stopIndex = int ( math.floor(dom.end / step) )
		e_out = 0
		for k in xrange(startIndex, stopIndex+1):
			# check that row in the matrix and all non-zero elements would be connected to it
			row = matrix[k, :].copy()
			row[row > 0] = 1
			e_out += row[0:startIndex].sum()
			e_out += row[stopIndex:N].sum()
			# for l in xrange(N):
			# 	if (l < startIndex or stopIndex < l) and matrix[k, l] > 0:
			# 		e_out+=1
		#print edgesInDomains[i], e_out
		E_in.append(edgesInDomains[i])
		E_out.append(e_out)
		cohesion.append(edgesInDomains[i] * 1.0 / e_out) # e_in / e_out
	# print E_out
	return cohesion, E_in, E_out


#############################################
##
##
##
#############################################
def calculateCoverage(domains, matrix, step, name, nonzeroEdges):
	D_count = len(domains)
	print "\tCalculating coverage..."
	edgesInDomains, lengths = calculateNonZeroInDomains(domains, matrix, step)

	print "total edges", nonzeroEdges
	'''
	max_edges_per_domain = [l * (l-1) / 2 for l in lengths]
	avg_dom_size = sum(lengths) / D_count
	sumOfDomains = calculateSumsInDomains(domains, matrix, step)
	print "\t#edges in domains |", "sum of domain edges |", "avg edge weight"
	
	av = [sumOfDomains[i] / edgesInDomains[i] for i in xrange(D_count) if edgesInDomains[i] > 0]
	av = sum(av) / D_count
	#av_implied_edge_weight = sum(sumOfDomains) / sum(max_edges_per_domain)
	av_implied_edge_weight = [sumOfDomains[i] / max_edges_per_domain[i] for i in xrange(D_count)]
	av_implied_edge_weight = sum(av_implied_edge_weight) / D_count
	if av <= av_implied_edge_weight: print "ALERT: distributed weight >= avg weight"
	print "\t", sum(edgesInDomains), sum(sumOfDomains), av
	print "\tpercent matrix weight captured"
	p_cap = sum(sumOfDomains) / np.sum(matrix)
	print "\t", p_cap

	# calculate density for each domain, average density
	print "\tDensity..."
	densities = calculateDensity(lengths, sumOfDomains)
	avg_density = sum(densities) / D_count
	print "\tAvg domain density", avg_density
	# plot them
	plt.clf()
	plt.plot(lengths, densities, 'b.')
	plt.plot( [0, max(lengths) + 1 ], [avg_density, avg_density], 'g-')
	plt.xlabel("Domain length")
	plt.ylabel("Domain density")
	plt.title("Domain density in " + name)
	#plt.savefig("domain_density_" + name + ".pdf")
	#plt.show()

	# calculate density-2: sum of edges / max_edges
	print "\tRatios..."
	ratios = calculateEdgeRatio(lengths, edgesInDomains)
	avg_ratio = sum(ratios) / len(ratios)
	print "\t", avg_ratio
	# plt.clf()
	# plt.plot(lengths, ratios, 'b.')
	# plt.plot( [0, max(lengths) + 1 ], [avg_ratio, avg_ratio], 'g-')
	# plt.ylim([-0.1, 1.1])
	# plt.xlabel("Domain length, in 40Kb fragments")
	# plt.ylabel("Ratio of non zero elements in domain to domain size sq / 2")
	# plt.title("Domain edge ratio in " + name)
	#plt.savefig("domain_edgeratio_" + name + ".pdf")
	#plt.show()
	'''

	# calculate cohesion, avg cohesion (adjust for domain size? )
	print "\tCohesion..."
	cohesion, E_in, E_out = calculateCohesion(edgesInDomains, domains, matrix, step)
	avg_cohesion = sum(cohesion) / len(cohesion)
	cohesion_detail = [ (E_in[i] * 1.0 / (lengths[i] * (lengths[i]-1 ) / 2 ), E_out[i] * 1.0 / (lengths[i] * (lengths[i]-1)/2 ) ) for i in xrange(D_count)]
	print "\t", avg_cohesion	
	#return edgesInDomains, av, p_cap, avg_density, avg_ratio, avg_dom_size, avg_cohesion, av_implied_edge_weight, cohesion_detail
	return None, None, None, None, None, None, None, None, cohesion_detail


#############################################
##
##
##
#############################################
def calculateMatrixProperties(M):
	nonzeros = np.nonzero(M)
	nonzeros = len(nonzeros[0])
	nonzeroSum = np.sum(M)
	print "\t#nonzeros, sum, avg non-zero weight"
	print "\t", nonzeros, nonzeroSum, nonzeroSum / nonzeros
	return nonzeros


#############################################
##
##
##
#############################################
def parseMultiResDomains(path, chromo, step):
	domains_res = {}
	print "Parsing our domains " + str(len(path)) + " files"
	for f_name in os.listdir(path):
		#print "Parsing", path + f_name
		# domains.chr=0.alpha=0.31txt
		_, chro, _, a = f_name[:-3].split(".")
		#assert(chro == chromo)
		if len(a) == 1:
			a = int(a) * 0.1
		else:
			a = int(a) * 0.01
		domains_res[a] = []
		with open(path+f_name, 'r') as f_in:
			for line in f_in:
				parts = line.strip().split()
				#print len(parts)
				if len(parts) == 2:
					start = parts[0]
					end = parts[1]#, end = line.strip().split()
				elif len(parts) == 3:
					start = parts[1]
					end = parts[2]# = line.strip().split()
				domains_res[a].append( Domain(int(start), int(end)) )
	return domains_res


#############################################
##
##
##
#############################################
def parseMultiResDomains2(paths, chromo, step):
	domains_res = {}
	print "Parsing our domains"
	for f_name in paths:
		parts = f_name.split("/")[-1].split(".")
		chro = parts[1]
		a = parts[-1][:-3]
		if len(a) == 1:
			a = int(a) * 0.1
		elif len(a) == 2:
			a = int(a) * 0.01
		else:
			a = 1 # 'alpha=1'
		domains_res[a] = []
		with open(f_name, 'r') as f_in:
			for line in f_in:
				parts2 = line.strip().split()
				start = parts2[1]
				end = parts2[2]#, end = line.strip().split()
				domains_res[a].append( Domain(int(start), int(end)) )
	return domains_res


#############################################
##
##
##
#############################################
def plotResolutionAgainstBlah(chromo, D, y_axis_name, figure_name, br_value, y_bounds=None):
	Z = [(k,v) for k,v in D.iteritems()]
	Z = sorted(Z, key=lambda x: x[0])
	X = [i[0] for i in Z]
	Y = [i[1] for i in Z]
	plt.clf()
	plt.xlabel("$\gamma$, resolution parameter")
	plt.ylabel(y_axis_name)
	if y_bounds != None:
		plt.ylim(y_bounds)
	plt.plot(X, Y, 'b.')
	plt.plot([min(X), max(X)], [br_value, br_value], 'g-')
	plt.savefig(chromo + "." + figure_name)

	# save data
	f_name = chromo + "." + figure_name + ".data"
	with open(f_name, 'w') as f:
		f.write( "{0} {1} {2}\n".format("resolution parameter", y_axis_name, br_value) )
		f.write( " ".join( map(str, X ) ) + "\n" )
		f.write( " ".join( map(str, Y) )+ "\n" )
	print "Saved data to " + f_name



def plotABunch(chromo, D, BRbunch, y_axis, x_axis, figure_name):
	#Z = sorted(Z, key=lambda x: x[0])
	plt.clf()
	plt.xlabel(x_axis)
	plt.ylabel(y_axis)
	X = [v[0] for v in BRbunch]
	Y = [v[1] for v in BRbunch]
	plt.yscale("log")
	plt.xlim([-0.1, 1.1])
	# plt.xscale("log")
	plt.plot(X, Y, 'g.', alpha=0.3) # plotted bing ren's
	for res, V in D.iteritems():
		X = [v[0] for v in V ]
		Y = [v[1] for v in V ]
		plt.plot(X, Y, 'b.', alpha=0.1)
	plt.savefig(chromo + "." + figure_name)

	# save data
	f_name = chromo + "." + figure_name + ".data"
	with open(f_name, 'w') as f:
		f.write( "{0} {1} {2}\n".format("resolution parameter", x_axis, y_axis) )
		f.write( " ".join( map(str, X ) ) + "\n" )
		f.write( " ".join( map(str, Y) )+ "\n" )
	print "Saved data to " + f_name



#############################################
##
##
##
#############################################
def main(argv):
	bingPath = argv[0]
	ourPath = argv[1:-2]
	matrixPath = argv[-2]
	input_chromo = argv[-1]
	# if len(argv) > 4:
	# 	step = int(argv[-1])
	# else:
	step = 40000
	multi_res_domains = True

	bingDomains = parseDomains(bingPath, input_chromo)
	
	if multi_res_domains:
		multi_dom = parseMultiResDomains2(ourPath, input_chromo, step)
	else:
		ourDomains = parseDomains(ourPath, input_chromo)	
	originalMatrix = parseMatrix(matrixPath)

	nonzeroEdges = calculateMatrixProperties(originalMatrix)
	
	Edges_res = {}
	AvgEdg_res = {}
	percent_covered_res = {}
	AvgDen_res = {}
	AvgDen2_res = {}
	DomSize_res = {}
	Cohesion_res = {}
	AvgImpl_res = {}
	Ein_Eout_res = {}
	# print "Bing domains"
	BRedgesInDomains, BRav, BRp_cap, BRavg_density, BRavg_ratio, BRavg_dom_size, BRavg_cohes, BRav_implied_edge_weight, BREin_Eout = calculateCoverage(bingDomains, originalMatrix, step, "BingRen", nonzeroEdges)
	#print BRav
	#print dontExist

	print "Our domains"
	if not multi_res_domains:
		edgesInDomains, av, p_cap, avg_density, avg_ratio, avg_dom_size, avg_cohes, av_implied_edge_weight,Ein_Eout = calculateCoverage(ourDomains, originalMatrix, step, ourPath.split("/")[-1])
	else:
		res_avg_weight = {}
		stuffs = []
		for res, domains in multi_dom.iteritems():
			print "Resolution", res
			edgesInDomains, av, p_cap, avg_density, avg_ratio, avg_dom_size, avg_cohes, av_implied_edge_weight,Ein_Eout = calculateCoverage(domains, originalMatrix, step, "OurDomains-res=" + str(res), nonzeroEdges )
			# Edges_res[res] = sum(edgesInDomains)
			AvgEdg_res[res] = av
			percent_covered_res[res] = p_cap
			AvgDen_res[res] = avg_density
			AvgDen2_res[res] = avg_ratio
			DomSize_res[res] = avg_dom_size
			Cohesion_res[res] = avg_cohes
			AvgImpl_res[res] = av_implied_edge_weight
			Ein_Eout_res[res] = Ein_Eout
			#quality_score = calculateScore(domains, originalMatrix, res)
			res_avg_weight[res] = av

		#plot this!
		# bounds = [ min( min(AvgEdg_res.values() ), min( AvgImpl_res.values() ), BRav, BRav_implied_edge_weight ) - 1, max( max( AvgEdg_res.values() ), max (AvgImpl_res.values() ) ) + 1, ]
		#print bounds, BRav
		#plotABunch(input_chromo, Ein_Eout_res, BREin_Eout, "E_out/ E_d", "E_in/E_d", "cohesion_detailed.pdf")
		#plotResolutionAgainstBlah(input_chromo, Edges_res, "edges covered", "edge_cover_resolution.pdf", sum(BRedgesInDomains) )
		#plotResolutionAgainstBlah(input_chromo, AvgEdg_res, "average edge weight across domains", "avg_edge.pdf", BRav, bounds)
		plotResolutionAgainstBlah(input_chromo, percent_covered_res, "percent of all interactions falling into domains", "percent_covered.pdf", BRp_cap)
		#plotResolutionAgainstBlah(input_chromo, AvgDen_res, "avg domain density", "domain_density_all.pdf", BRavg_density)
		#plotResolutionAgainstBlah(input_chromo, AvgDen2_res, "avg edge ratio", "edge_ratio_all_res.pdf", BRavg_ratio)
		# plotResolutionAgainstBlah(input_chromo, DomSize_res, "avg domain size", "avg_domain_size.pdf", BRavg_dom_size)
		# plotResolutionAgainstBlah(input_chromo, Cohesion_res, "avg domain cohesion ($E_{in} / E_{out}$)", "avg_cohesion.pdf", BRavg_cohes)
		# plotResolutionAgainstBlah(input_chromo, AvgImpl_res, "avg distributed edge weight", "avg_edge_distrib.pdf", BRav_implied_edge_weight, bounds)



if __name__ == "__main__":
	main(sys.argv[1:])