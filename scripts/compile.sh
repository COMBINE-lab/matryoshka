#!/bin/bash

# Activate Holy Build Box environment.
source /hbb_exe/activate

set -x

# Install things we need
yum install -y --quiet wget
wget http://download.fedoraproject.org/pub/epel/5/x86_64/epel-release-5-4.noarch.rpm
rpm -i --quiet epel-release-5-4.noarch.rpm
yum install -y --quiet unzip
yum install -y --quiet bzip2-devel.x86_64

wget --no-check-certificate 'http://sourceforge.net/projects/boost/files/boost/1.59.0/boost_1_59_0.tar.bz2'
tar xf ./boost_1_59_0.tar.bz2
cd boost_1_59_0/
./bootstrap.sh --prefix=/boost
./b2 -d0 clean
./b2 -d0 install
cd /

set -e

curl -k -L https://github.com/COMBINE-lab/matryoshka/zipball/master/ -o matryoshka.zip
mkdir matryoshka
unzip matryoshka.zip -d ./matryoshka
cd matryoshka/
ls
cp -r $(ls)/* ./
mkdir build
cd build
cmake -DBOOST_ROOT=/boost ../
make
cp src/matryoshka /io/
