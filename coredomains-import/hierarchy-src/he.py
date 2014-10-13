from glob import glob
from subprocess import check_output
from os import system as r
import os
from os.path import basename
from multiprocessing import Pool

# ./armatus -i /data/threec/dixon/IMR90/40kb/combined/chr1.nij.comb.40kb.matrix.gz -g .5 -o test-multiopt -k 10 -m
# ./armhier tests/chr1-random.txt 0.1
# python ShuffleDomains.py test-multiopt.gamma.0.00.00.txt test-multiopt.gamma.0.00.00.txt.shuffled
# cat test-multiopt.gamma.* > ~/coredomains/amb-src/hierarchy-src/tests/chr1-multiopt-10.txt

data = "/data/threec/dixon"
armatus = "armatus/build/src/armatus"
armhier = "coredomains/amb-src/hierarchy-src/armhier"
shuffledom = "armatus/build/src/ShuffleDomains.py"

human = sorted(glob(data+"/IMR90/40kb/combined/*.gz"))
mouse = sorted(glob(data+"/mESC/40kb/HindIII_combined/*.gz"))

gammaMax = 0.5
k = 10
alpha = 0.1
numSamples = 20 

chromlens = {
"1":    249250621,  
"2":    243199373,  
"3":    198022430,  
"4":    191154276,  
"5":    180915260,  
"6":    171115067,  
"7":    159138663,  
"8":    146364022,  
"9":    141213431,  
"10":   135534747,  
"11":   135006516,  
"12":   133851895,  
"13":   115169878,  
"14":   107349540,  
"15":   102531392,  
"16":   90354753,   
"17":   81195210,   
"18":   78077248,   
"19":   59128983,   
"20":   63025520,   
"21":   48129895,   
"22":   51304566,
'X':    155270560,
'Y':    59373566,
'M':    16569
}

def hierscore(prefix):
    r("cat {0}*gamma.* > {0}.combined".format(prefix))
    return check_output("{0} {1}.combined 0.1".format(armhier, prefix), shell=True).rstrip()

def fuckyoupython(args):
    basef,prefix,i = args
    domfiles = glob("domains-{0}*gamma.*".format(basef))
    chrom = basef[3:basef.find(".")]
    for dom in domfiles:
        r("python {0} {1} shuffled.{2}.{1} {3} {4}".format(shuffledom, dom, i, chrom, chromlens[chrom]))

    rand = hierscore("shuffled.{1}.{0}".format(prefix,i))
    print "Random: "+rand
    return rand
    

def chrom_enrichment(f):
    basef = basename(f)
    r("{0} -i {1} -g 0.5 -o domains-{3} -k {2} -m".format(armatus, f, k, basef))
    prefix = "domains-"+basef
    observed = hierscore(prefix)
    print "Observed: "+observed 

    p = Pool(7)
    randoms = p.map(fuckyoupython, [(basef,prefix,i) for i in xrange(numSamples)])
    r("rm *.txt *.combined")

def org_enrichment(files):
    for f in files: chrom_enrichment(f)
      
def main():
    org_enrichment(human[1:])
    org_enrichment(mouse)

if __name__ == "__main__": main() 
 
