#!/bin/bash
arr=()
for i in $@
do
  arr+=($i)
done

n=${#arr[@]}
j=0
i=0
echo $[n-1]

while [ $i -lt $[n-1] ];
do
    while [ $j -lt $n ];
    do
    if [ ${arr[j]} -gt ${arr[$[j+1]]} ]; then
        max="${arr[j]}"
        arr[j]="${arr[$[j+1]]}"
        arr[$[j+1]]=$max
    fi
    let j=j+1
    done
let i=i+1
done