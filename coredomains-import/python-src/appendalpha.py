import glob
import sys
import pylab

for fname in glob.glob("domains-data/{1}/*chr{0}.*.alpha*".format(sys.argv[1],sys.argv[2])):

	alpha = fname.split("=")[1][0:-3]

	print fname, alpha

	#if float(alpha) < float(sys.argv[3]): continue

	with open(fname) as f:
		scores = [float(line.rstrip().split()[3]) for line in f]
	m = sum(scores)

	mu,ln = pylab.mean(pylab.array(scores)/m),len(scores)
	print alpha, (pylab.mean(scores)),mu,ln,mu*ln


	with open(sys.argv[3],"w") as g:
		with open(fname) as f:
			for line in f:
		  		fields = line.rstrip().split()
		  		chrom, start, end, score = fields
		  		score = str(float(score)/m)
		  		g.write("\t".join([start,end,score,alpha,chrom])+"\n")
