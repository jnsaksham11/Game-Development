function catalan {
    n=$1
    local result=0
    if [ $n -eq 0 ] || [ $n -eq 1 ];then
        echo 1
    else
        for (( i=0; i<n; i++ ));
        do
          result=$[ result + $(catalan $i) * $(catalan $[n - 1 - i]) ]
        done
        echo $result
    fi
}
echo $(catalan $1)