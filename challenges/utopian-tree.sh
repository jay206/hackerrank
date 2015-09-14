#!/bin/bash
# https://www.hackerrank.com/challenges/utopian-tree
# All Domains > Algorithms > Implementation > Utopian Tree

read t
while ((t--))
do
  read n
  echo "x=$n;2 * (2 * 2^((x - ((x - 1) % 2) - 1)/(2)) - 1) + ((x - 1) % 2)" | bc
done
