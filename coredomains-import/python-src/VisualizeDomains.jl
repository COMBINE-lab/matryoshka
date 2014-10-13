
Pkg.add("ImageView")
using Images
using ImageView
using Color
using GZip

fh = GZip.open("/Users/rob/Downloads/IMR90/40kb/combined/chr1.nij.comb.40kb.matrix.gz")
line = readline(fh)
floats = float(split(strip(line))[4:end])
N = length(floats)
println(floats)

M = zeros(N,N)
for ln = 2:N
  M[ln,:] = float(split(strip(readline(fh)))[4:end])
end

display(M)

close(fh)
println("hello world!")