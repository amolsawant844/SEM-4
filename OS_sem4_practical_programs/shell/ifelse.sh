#num1 -eq num2                  check if 1st  number is equal to 2nd number
#num1 -ge num2                  checks if 1st  number  is greater than or equal to 2nd number
#num1 -gt num2                  checks if 1st  number is greater than 2nd number
#num1 -le num2                   checks if 1st number is less than or equal to 2nd number
#num1 -lt num2                   checks if 1st  number  is less than 2nd number
#um1 -ne num2                  checks if 1st  number  is not equal to 2nd number




#is 9 greater than equal to 9?
count=9

if [ $count -ge 9 ]
then
	echo "condition is true"
else
	echo "condition is false"
fi

word=abc

if [ $word == "abc" ]
then
	echo "it is same"
fi


#ifelf
var=a
 if [[ $var == "b" ]]
 then
 	"it is b"
 elif [[ $var == "a" ]] 
 then
 	echo "it is a"
 else
 	echo "it is neither of these"
 fi


