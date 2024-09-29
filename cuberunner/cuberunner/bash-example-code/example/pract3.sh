file=$1  
declare -A arr

if [ -f "$file" ]; then
	while read line; do    
  		# echo "Line No. $i : $line"



        for j in $line
        do
        #    echo "arr[$j]"
        #   (( arr[$j]++ ))
        echo $j > /dev/null
        done
	done < $file
else
    echo "File not found: $file"
fi

# for word in "${!arr[@]}"; do
#     echo "arr[$word]: ${arr[$word]}"
# done