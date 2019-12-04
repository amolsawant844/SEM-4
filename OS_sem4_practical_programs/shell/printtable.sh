echo "enter a number"
read n
i=1
while (( i<=10 ))
do
	mul=$(( i*n ))
	echo "$n x $i = $mul"
	i=$(( i+1 ))
done