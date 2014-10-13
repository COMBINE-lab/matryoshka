import sys
import random
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('chrom_size', metavar='s', type=int)
parser.add_argument('num_domains', metavar='n', type=int)

args = parser.parse_args()

def random_domain():
    return sorted([random.randint(0,args.chrom_size) for i in xrange(2)])

for i in xrange(args.num_domains):
    print "\t".join( ["chr1"]+map(str,random_domain()) )
