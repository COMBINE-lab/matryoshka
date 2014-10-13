from CoreDomain import *
import argparse
import pylab
import glob

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--ourdoms',type=str)
    parser.add_argument('--dixondoms',type=str)
    parser.add_argument('--organism',type=str)
    args = parser.parse_args()

    if args.organism == 'mouse': chroms = chroms_mouse
    elif args.organism == 'human': chroms = chroms_human

    dixondoms = []
    for chrom in chroms:
        dixondoms += read_domains(args.dixondoms,chrom)

    ourdoms = {}

    for chrom in chroms:
        for fname in glob.glob("{0}/*chr{1}.*.alpha*".format(args.ourdoms,chrom)):
            gamma = float(fname.split("=")[1][0:-3])
            if gamma not in ourdoms: ourdoms[gamma] = []
            ourdoms[gamma] += read_domains(fname,chrom)


    keys,values = zip(*sorted(ourdoms.items()))

    pylab.plot(keys, [ max([d.len() for d in doms])
        for doms in values],'o-')
    pylab.plot(keys, [ pylab.mean([d.len() for d in doms])
        for doms in values],'o-')
    pylab.yscale('log')
    #pylab.axhline(pylab.mean([d.len() for d in dixondoms]))
    pylab.axhline(max([d.len() for d in dixondoms]))
    pylab.show()    


if __name__=="__main__": main()