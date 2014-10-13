import sys

class domain:
    "Basic domain reading and ops"
    def __init__(self, fields):
        chrom, start, end = fields
        if chrom.find("chr") == -1:
            self.chrom = chrom
        else:
            self.chrom = chrom[3:]
        self.start = int(start)
        self.end = int(end)

    def len(self):
        return self.end-self.start

    def interval(self):
        return (self.start, self.end)

    def __str__(self):
        return "chr{0}\t{1}\t{2}".format(self.chrom, self.start, self.end)

def shuffle_domains(doms, chromlen):
    """
    Goal: shuffle domain and non-domain regions so that they
    do not overlap with one another

    Their file format has the endpoint overlapping by exactly
    one point with the start as a convention.  I continue with
    this convention.
    """
    import itertools
    import random

    doms = sorted(doms, key=lambda x: x.start)

    chrom = doms[0].chrom
    dlens = []
    ndstr = 'non-domain'
    dstr = 'domain'

    # If we dont start with a domain, begin with a non-domain
    if doms[0].start != 0:
        dlens.append((ndstr, doms[0].start))

    for dcur, dnext in itertools.izip(doms, doms[1:]):
        dlens.append((dstr, dcur.len()))
        if not dcur.end >= dnext.start:
            dlens.append((ndstr, dnext.start - dcur.end))

    # Append the last domain
    dlens.append((dstr, doms[-1].len()))

    # If there is still room left on the chromosome, append a non-domain
    if chromlen > doms[-1].end:
        dlens.append((ndstr, chromlen - doms[-1].end))

    newlens = list(dlens)
    random.shuffle(newlens)

    randomDoms = []
    chrBase = 0
    for dstat, dlen in newlens:
        if dstat == dstr:
            randomDoms.append(domain([chrom, chrBase, chrBase + dlen]))
        chrBase += dlen

    return randomDoms

def read_domains(fname, chrom):
    "Read all domains for a particular chromosome from the Dixon file format"
    domains = []
    with open(fname) as f:
        for line in f:
            d = domain(line.rstrip().split()[0:3])
            if d.chrom == chrom:
                domains.append(d)
    return sorted(domains, key=lambda d: d.end)

def main():
    rdoms = shuffle_domains(read_domains(sys.argv[1], sys.argv[3]), int(sys.argv[4]))
    with open(sys.argv[2], "w") as f:
	    for d in rdoms: f.write("{0}\n".format(d))

if __name__ == "__main__": main()
