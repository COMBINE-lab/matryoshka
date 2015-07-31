#!/bin/bash

for (( chr=1; chr<=20; chr++ ))
do
	awk -F "\t" -v val="chr"$chr '{if ($2==val) print}' mESCData/mESC.consensus.info.txt > mESCData/mESC.consensus.info.temp.txt                  
	python ../../code/gen_rand_hier.py
done 
