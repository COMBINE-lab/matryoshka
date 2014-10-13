from CoreDomain import *
import argparse

def main():
	parser = argparse.ArgumentParser()
	parser.add_argument('--numdomains',default=1,type=int)
	parser.add_argument('--domains',type=str)
	parser.add_argument('--clenfile',default='domains-data/chromlens.txt', type=str)
	parser.add_argument('--outprefix',default='domains-data/random/ran', type=str)
	args = parser.parse_args()

	clens = read_chromlens(args.clenfile)

	for i in xrange(args.numdomains):
		with open(args.outprefix+".{0}.txt".format(i), "w") as f:
			for chrom in chroms_human:
				rdoms = shuffle_domains_rob(read_domains(args.domains,chrom),clens[chrom])
				for d in rdoms: f.write("{0}\n".format(d))

if __name__ == "__main__": main()