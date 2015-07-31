import pylab

pylab.rcParams['font.size'] = 20
pylab.rcParams['xtick.major.size'] = 5
pylab.rcParams['ytick.major.size'] = 5
from CoreDomain import *

def VI(da,db,n):
	if (len(db)==0):
		return -1
	if (len(da)==0):
		return -2
	res = 40000
	dap = [Domain(d.start/res, d.end/res) for d in da]
	dbp = [Domain(d.start/res, d.end/res) for d in db]
	def maxend(dap): return max([d.end for d in dap])
	maxdom = max(maxend(dap),maxend(dbp))+1
	return jaccard(dap,dbp,max(n/res+1,maxdom))[0]

def main():
	#chromlens = {
	#"1":    247249719,  
	#"2":    242951149,
	#"3":    199501827,  
	#"4":    191273063,  
	#"5":    180857866,  
	#"6":    170899992,  
	#"7":    158821424,  
	#"8":    146274826,  
	#"9":    140273252,  
	#"10":   135374737,  
	#"11":   134452384,  
	#"12":   132349534,  
	#"13":   114142980,  
	#"14":   106368585,  
	#"15":   100338915,  
	#"16":   88827254,   
	#"17":   78774742,   
	#"18":   76117153,   
	#"19":   63811651,   
	#"20":   62435964,   
	#"21":   46944323,   
	#"22":   49691432,
	#'X':    154913754,
	#'Y':    57772954,
	#'M':    16571
	#}
	
	chromlens = {
	"1":    197195432,  
	"2":    181748087,
	"3":    159599783,  
	"4":    155630120,  
	"5":    152537259,  
	"6":    149517037,  
	"7":    152524553,  
	"8":    131738871,  
	"9":    124076172,  
	"10":   129993255,  
	"11":   121843856,  
	"12":   121257530,  
	"13":   120284312,  
	"14":   125194864,  
	"15":   103494974,  
	"16":   98319150,   
	"17":   95272651,   
	"18":   90772031,   
	"19":   61342430,   
	'X':    166650296,
	'Y':    15902555,
	'M':    16300
	}

	chroms = pylab.arange(1, 20)
	UsVSBingy = []

	for chrom in map(str, chroms):
		#dixonDomains = read_domains("controlmesc-imr90.txt", chrom)
		#dixonDomains = read_domains("controlimr90.randomized.txt", chrom)
		#dixonDomains = read_domains("mESCData/mESC-imr90.5.txt", chrom)
		#dixonDomains = read_domains("imr90.randomized.3.txt", chrom)
		#dixonDomains = read_domains("mESCData/mESC-imr90.bed", chrom)
		#dixonDomains = read_domains("imr90.randomized.txt", chrom)
		#dixonDomains = read_domains("IMR90Data/imr90-mESC.5.txt", chrom)
		dixonDomains = read_domains("mESCData/mESC-imr90.randomized.txt", chrom)
		
		#ourDomains = read_domains("IMR90Data/imr90.5.txt", chrom)
		ourDomains = read_domains("IMR90Data/imr90.randomized.txt", chrom)
		#ourDomains = read_domains("controlimr90.txt", chrom)
		#ourDomains = read_domains("IMR90Data/imr90.consensus.txt", chrom)
		#ourDomains = read_domains("mESCData/mESC.consensus.txt", chrom)
		#ourDomains = read_domains("mESCData/mESC.5.txt", chrom)
		#ourDomains = read_domains("IMR90Data/imr90-mESC.randomized.5.txt", chrom)

		UsVSBingy.append(VI(dixonDomains, ourDomains, chromlens[chrom]))
		print UsVSBingy[-1]

if __name__ == "__main__":
    main()

