echo "enter a number"
read a
rem=$(( a % 2 ))
if (( $rem == 0 ))
then
	echo "the number is even"
else
	echo "the no. is odd"
fi