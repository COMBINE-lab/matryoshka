class Edge3C implements Comparable<Edge3C> {
	public int chromo1, chromo2;
	public int start1, start2;
	public float observed_cnt;
	
	public Edge3C(int start1, int start2, float value) {
		this.start1 = start1;
		this.start2 = start2;
		observed_cnt = value;
	}

	@Override
	public int compareTo(Edge3C that) {
		if (this.chromo1 < that.chromo1)
			return -1;
		if (this.chromo1 > that.chromo1)
			return 1;
		if (this.start1 < that.start1)
			return -1;
		if (this.start1 > that.start1)
			return 1;
		if (this.start2 < that.start2)
			return -1;
		if (this.start2 > that.start2)
			return 1;
		return 0;
	}
}