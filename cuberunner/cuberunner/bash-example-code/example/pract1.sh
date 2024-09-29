#!/bin/bash
arr=()
found=false
for i in ${@:2}
do
  arr+=($i)
done


for i in ${arr[@]}
do
  if [ $1 -eq $i ]; then
    echo "yes"
    exit 0
  fi
done
echo "no"