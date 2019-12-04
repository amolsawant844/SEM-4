num1=10
num2=20
 
sum=$(( num1 + num2 ))
sub=$(( num1 - num2 ))
div=$(( num1 / num2 ))
mul=$(( num1 * num2 ))
mod=$(( num1 % num2 ))
echo $sum
echo $sub
echo $div
echo $mul
echo $mod

#other way
sum=$(expr $num1 + $num2 )
sub=$(expr $num1 - $num2 )
div=$(expr $num1 / $num2 )
mul=$(expr $num1 \* $num2 ) #asterik is not escaped therefore we us backslash
mod=$(expr $num1 % $num2 )
echo $sum
echo $sub
echo $div
echo $mul
echo $mod