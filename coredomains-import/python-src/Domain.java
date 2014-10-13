class Domain {
	public int start;
	public int end;
	public Domain(String s) {
		String [] parts = s.split("\\s");
		start = Integer.parseInt(parts[1]) / ComputeInterIntra.STEP;
		end = Integer.parseInt(parts[2]) / ComputeInterIntra.STEP;
	}
}