import sys


class gene:
    # Initialize the gene with the correct types from a list of fields
    def __init__(self, fields):
        # Read in fields
        self.fields = fields  # Store for printing original gene later
        self.start = int(fields[0])
        self.end = int(fields[1])
        self.score = float(fields[2])

        # Flip genes have a greater start position than end position
        if self.start > self.end:
            tmp = self.end
            self.end = self.start
            self.start = tmp

    # String representation of a gene
    def __str__(self):
        return " ".join(self.fields)


def read_gene_list(fname):
    """
    Return a list of genes from the file sorted by end position
    """

    with open(fname) as f:
        # None is because we want the gene list to start at index 1
        return tuple([None]+sorted([gene(line.rstrip().split()) for line in f],
                     key=lambda g: g.end))


def prev_disjoint_gene(j, genes):
    """
    Given the index j of a gene in genes, find the index i < j
    of a gene that does not overlap with gene j
    """
    for i in range(j, -1, -1):
        if i == 0:
            return 0
        if genes[i].end < genes[j].start:
            return i


def chosen_genes(best_gene_score, genes):
    chosen = []
    j = len(best_gene_score)-1
    while j > 0:
        if best_gene_score[j] != best_gene_score[j-1]:
            chosen.append(genes[j])
            j = prev_disjoint_gene(j, genes)
        else:
            j = j-1
    return chosen


def main():
    """
    Find an optimal set of non-overlapping genes from a text file of genes.
    Each line representing gene i in the text file should be: si ei ri
    where si is the start position of the gene, ei is the end position of
    the gene, and ri is the score of the gene.
    """

    if len(sys.argv) != 3:
        print "Usage: python choosegenes.py genes.txt outfile.txt"

    genes_file = sys.argv[1]
    outfile = sys.argv[2]
    genes = read_gene_list(genes_file)
    n = len(genes)-1

    # Computing score iteratively, initialize array
    best_gene_score = [0]*(n+1)

    # Cached version of prev_disjoint_gene
    p = {j: prev_disjoint_gene(j, genes) for j in range(1, n+1)}

    for j in range(1, n+1):

        # Compute the score for each case
        score_if_chosen = genes[j].score + best_gene_score[p[j]]
        score_if_ignored = best_gene_score[j-1]

        # Choose the case with the best score
        best_gene_score[j] = max(score_if_chosen, score_if_ignored)

    with open(outfile, "w") as f:
        sp = 0
        for gene in chosen_genes(best_gene_score, genes):
            print "Include:", gene
            f.write("{0}\t{1}\t{2}\n".format("chr"+gene.fields[3], gene.start, gene.end))
            sp += gene.score
        print "Sum Probability: {0}".format(best_gene_score[n])
        print "SP check: {0}".format(sp)


if __name__ == "__main__":
    main()
