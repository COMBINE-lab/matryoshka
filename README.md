matryoshka
==========

Hierarchical domain calling software for chromosome conformation capture datasets. Basad on the multiresolution domain calling tool, Armatus. (http://www.cs.cmu.edu/~ckingsf/software/armatus/)

Installation
------------

Dependencies:

* C++11
* Boost (Graph, Test, ublas, program options, system)

Note: Although this should be conceptually easy, properly installing these dependencies can be tricky since on a system like OS X you can choose to use different compilers and standard libraries.  Please make sure that boost is installed with the same standard libary and compiler that you are using to compile Matryoshka. Binaries of Matryoshka will be released as well.

Here is an example of how to compile boost with Clang++ and use Clang++ to compile Matryoshka on OS X:

Boost-specific details:

    ./bootstrap --prefix=$HOME/boost
    ./b2 clean
    ./b2 install toolset=clang cxxflags="-stdlib=libc++" linkflags="-stdlib=libc++"

Using CMake to compile Matryoshka:

    cmake -DCMAKE_CXX_COMPILER=clang++ -DBOOST_ROOT=$HOME/boost -DBoost_NO_SYSTEM_PATHS=true ..
    make
    export DYLD_FALLBACK_LIBRARY_PATH=$HOME/boost/lib

Make sure you substitute `$HOME/boost` with the installation path you desire.

Here is one-liner to compile Matryoshka with G++ given you have the proper dependencies:

     g++ -std=c++11 -w -lboost_system -lboost_iostreams -lboost_program_options -L /opt/local/lib/ -I include/ -I /opt/local/include/ -O3 -o binaries/matryoshka-linux-x64 src/*.cpp 

Note that this assumes you have Boost installed in "/opt/local".

WARNING
-------

We have noticed that occassionally, the *order* of the arguments passed can result in a memory bug that is yet unexplained since we are using the Boost argument parser.  We are working to resolve this issue.  If you experience this issue, place the "-m" argument before the "-k" argument.

Example Run
-----------

The main inputs into Matryoshka are the matrix file and the gammaMax parameter which determines the highest resolution at which domains are to be generated. Please make sure that the input matrix is in the following tab-separated format:

    chr19  40000  80000  10  0   1  0 ...

where the first three columns represent the chromosome name with the fragment start and end positions (based on the resolution of the dataset). The fields following represent the interaction frequencies for that fragment.

An example run on chromosome 19 (given in the example dataset) of mouse embryonic stem cell data. You should get similar output when running Matryoshka:

	time ./src/matryoshka -i ../example/nij.chr19.new.gz -g 1 -o test
	Reading input from ../example/nij.chr19.new.gz.
	chr19 at resolution 40000bp
	Mean Boundary Index is 664.7
	MatrixParser read matrix of size: 1534 x 1534
	gamma=0
	gamma=0.05
	gamma=0.1
	gamma=0.15
	gamma=0.2
	gamma=0.25
	gamma=0.3
	gamma=0.35
	gamma=0.4
	gamma=0.45
	gamma=0.5
	gamma=0.55
	gamma=0.6
	gamma=0.65
	gamma=0.7
	gamma=0.75
	gamma=0.8
	gamma=0.85
	gamma=0.9
	gamma=0.95
	gamma=1
	There are 2 levels of hierarchy with clustering: 
	0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 
	Writing consensus for level 1
	Writing consensus for level 2

	real	0m19.139s
	user	0m19.047s
	sys	0m0.012s


The first `-i` parameter is a gzipped HiC matrix for chromosome 19 as obtained from Dixon et al (http://chromosome.sdsc.edu/mouse/hi-c/download.html) and edited to follow the above guideline. The second `-g` parameter is the maximum gamma at which to sample at. Output files are all written with a prefix `test`.
