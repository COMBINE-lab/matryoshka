
class BroadPeak(object):

    def __init__(self, line):
        toks = line.rstrip().split()
        # CODEREVIEW: Should be changed. But shouldn't affect anything
        toks = ['0'] + toks
        self.chrom = toks[1]
        self.start = int(toks[2])
        self.stop = int(toks[3])
        #self.name = toks[4]
        #self.score = float(toks[5])
        #self.strand = toks[6]
        #self.signalValue = float(toks[7])
        #self.pValue = float(toks[8])
        #self.qValue = float(toks[9])


def broadPeakFileParser(fname):
    import gzip

    res = None

    f = gzip.GzipFile(fname) if(fname.endswith('gz')) else open(fname)
    res = [BroadPeak(l) for l in f]
    f.close()

    return res


class ContinuousFeature(object):

    def __init__(self, toks):
        self.chrom = toks[0]
        self.start = int(toks[1])
        self.stop = int(toks[2])
        self.value = float(toks[3])
        self.value2 = float(toks[4])

def parseWig(fname):
    import sys
    vals = []
    with open(fname, 'rb') as ifile:
        for i, l in enumerate(ifile):
            toks = l.strip().split()
            if i % 10000 == 0:
                sys.stdout.write("Feature: {}\r\r".format(i))
            if not l.startswith('#') and len(toks)==5:
                vals.append(ContinuousFeature(toks))
    return vals
