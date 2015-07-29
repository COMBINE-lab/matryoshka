#!/bin/bash

make

directory='/home/laraib/Desktop/Laraib/Desktop/COMBINE lab work/matryoshka_heir/build'
cd "$directory"

curFolder='newfnc_clusteringgamma_WG_PAMTest_mESC'

#rm -r '../data/'$curFolder
#mkdir '../data/'$curFolder
#mkdir '../data/'$curFolder'/consensus'

#IMR90
#areaCov=(204200000 296360000 175040000 167280000 157560000 156560000 118920000 125720000 104080000 119920000 113480000 106240000 90120000 79280000 68680000 64880000 53760000 #68040000 39520000 53880000 31200000 27760000 127640000)

#mESC
areaCov=(136080000 132760000 119160000 113800000 116280000 103800000 106520000 96480000 92960000 99560000 87560000 94440000 91200000 88120000 75760000 68080000 75960000 67440000 44920000 107960000)

#for (( chr=1; chr<=23; chr++ ))
#do

chr=20

val=${areaCov[$chr-1]}

mkdir '../data/'$curFolder'/chr'$chr

input_file='../../armatus-master-final/data/mESC/uij/uij.chr'$chr'.new.gz'
output_file='../data/'$curFolder'/chr'$chr'/chr'$chr

./src/armatus -i $input_file -o $output_file -g 0.5 -x 0 -a $val

cp '../data/'$curFolder'/chr'$chr'/chr'$chr'.consensus.txt' '../data/'$curFolder'/consensus/'

#done
