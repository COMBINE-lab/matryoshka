import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.zip.GZIPInputStream;


class ComputeInterIntra {

	public static final int STEP = 40000;
	public static final int EXTENT = 50;
	// public static String inputChromo;

	public static void main(String [] argv) {
		// System.out.println(argv.length);
		String inputChromo = argv[0];
		String matrixPath = argv[1];
		String bingRenPath = argv[2];
		String outPrefix = argv[3];
		System.out.println("Chromosome " + inputChromo);
		float [][] M = readMatrix(matrixPath);

		String f_out_name = outPrefix + inputChromo + ".data";
		try {
			FileOutputStream fos = new FileOutputStream(f_out_name); 
			OutputStreamWriter out = new OutputStreamWriter(fos);
			BufferedWriter bw = new BufferedWriter(out);

			// parse Bing Ren domains
			ArrayList<Domain> domains = parseDomains(bingRenPath, inputChromo);
			bw.write("BingRen\n");
			writeInterIntraDistances(domains, M, bw);

			// parse our domains at various resolutions
			for (int i = 0; i < argv.length - 4; i++) {
				float res = parseName(argv[i+4]);
				domains = parseDomains(argv[i+4], inputChromo);
				bw.write("Resolution " + res);
				bw.newLine();
				writeInterIntraDistances(domains, M, bw);
			}
			for (int g = 0; g < EXTENT; g++)
				bw.write(g + "\t");
			bw.newLine();
			bw.close();
			System.out.println("Data file written to " + f_out_name);
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}

	}

	private static float parseName(String fname) {
		String [] tokens = fname.split("alpha=");
		// System.out.println(tokens.length + " " + fname);
		// System.out.println(tokens[1]);
		tokens = tokens[1].split("txt");
		return Float.parseFloat(tokens[0]);
	}


	private static float[][] readMatrix(String gzPath){
		System.out.println("Reading matrix from " + gzPath);
		ArrayList<Edge3C> edges = new ArrayList<Edge3C>();
		int cnt = 0;
		
		try {
			GZIPInputStream zipReader = new GZIPInputStream(new FileInputStream(gzPath));
			InputStreamReader streamReader = new InputStreamReader(zipReader);
			BufferedReader br = new BufferedReader(streamReader);
			String line;
			Edge3C e;
			boolean firstLine =  true;
			float sum = 0;
			int edg_cnt = 0;
			while ( (line = br.readLine()) != null) {
				cnt++;
				if (cnt % 1000  == 0)
					System.out.print("\t" + cnt + " ");
				if (firstLine) {
					firstLine = false;
					continue;
				}
				String [] tokens = line.trim().split("\t");
				int start1 = Integer.parseInt(tokens[1]); // start
				
				for (int i = 3; i < tokens.length; i++) {
					float value = Float.parseFloat(tokens[i]); 
					if (value > 0.0) {
						edg_cnt++;
						int start2 = i - 3;
						e = new Edge3C(start1 / STEP, start2, value);
						edges.add(e);
						sum+= value;
					}
				}
			}
			System.err.println("\nAvg edge " + (sum/edg_cnt)  + " sum " + sum + " cnt " + edg_cnt);
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}

		return createMatrix(edges);
	}

	private static float[][] createMatrix(ArrayList<Edge3C> edges) {
		int N = 0;
		for (Edge3C e : edges) {
			if ( e.start1 > N)
				N = e.start1;
			if (e.start2 > N)
				N = e.start2;
		}
		System.out.println(N);
		float [][] M = new float[N+1][N+1];
		for (Edge3C e : edges) {
			if (e.start1 <= e.start2) {// only do upper triangle
				M[e.start1][e.start2] = e.observed_cnt;
			}
		}
		return M;
	}


	private static ArrayList<Domain> parseDomains(String domainPath, String inputChromo) {
		System.out.println("\tParsing domains from " + domainPath);
		try {
			InputStreamReader streamReader = new InputStreamReader(new FileInputStream(domainPath));
			BufferedReader br = new BufferedReader(streamReader);
			String line;
			ArrayList<Domain> domains = new ArrayList<Domain>();
			Domain d;
			while ( (line = br.readLine()) != null) {
				if ( line.contains(inputChromo) ) {
					d = new Domain(line.trim());
					domains.add(d);
				}
			}
			return domains;
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}

		return null;
	}


	private static void writeInterIntraDistances(ArrayList<Domain> domains, float [][] M, BufferedWriter bw) throws IOException {
		//System.out.println("\tComputing inter, intra mean frequencies");
		int N = M.length;
		float [] inter = new float[EXTENT];
		float [] intra = new float[EXTENT];
		for (int g = 0; g < EXTENT; g++) {
			ArrayList<Float> intra_freq = new ArrayList<Float>();
			ArrayList<Float> inter_freq = new ArrayList<Float>();
			for (int i = 0; i < N-g; i++) {
				if ( isIntraDomain(i, i+g, domains) )
					intra_freq.add( M[i][i+g] );
				else
					inter_freq.add( M[i][i+g] );
			}
			int nz = inter_freq.size();
			if (nz == 0)
				inter[g] = 0;
			else
				inter[g] = sum(inter_freq) / nz;

			nz = intra_freq.size();
			// System.out.println(g + " " + nz);
			if (nz == 0)
				intra[g] = 0;
			else
				intra[g] = sum(intra_freq) / nz;
		}
		for (int g = 0; g < EXTENT; g++) {
			bw.write(inter[g] + "\t");
		}
		bw.newLine();
		for (int g = 0; g < EXTENT; g++) {
			bw.write(intra[g] + "\t");
		}
		bw.newLine();
	}

	private static boolean isIntraDomain(int i, int j, ArrayList<Domain> domains) {
		for (Domain d : domains)
			if ( (d.start <= i) && (j <= d.end) ) 
				return true;
		return false;
	}

	private static float sum(ArrayList<Float> arr) {
		float sum = 0;
		for (float f : arr) sum+=f;
		return sum;
	}

}