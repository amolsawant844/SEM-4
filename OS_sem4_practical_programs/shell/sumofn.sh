echo "enter the value of n"
read n
s=0
while [ $n -ge 1 ]
do
	s=$(( s+n ))
	n=$(( n-1 ))
	
done
echo "$s"