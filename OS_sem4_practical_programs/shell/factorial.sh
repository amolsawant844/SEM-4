echo "enter a number"
read n
f=1

while (( n>=1 ))
do
	f=$(( f*n ))
	n=$(( n-1 ))
done
echo $f