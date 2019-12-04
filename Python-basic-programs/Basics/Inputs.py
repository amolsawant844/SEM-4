
#inputing a string
str=input()
print(str)

str1=input("enter your name:")
print(str1)


#inputing a number
n=int(input("enter ur favourite number"))
print(n)
n1=float(input("enter a floating point number:"))
print(n1)

#to accept more than one input in the same line we can use a for loop along with the input function
#the no.s are separated by comma
a,b=[int(x) for x in input("enter two numbers:").split(',')]
print(a,b,sep=(','))


#a program to accept 3 integers seeparated by comma and prinitng the sum
var1,var2,var3=[int(x) for x in input("enter three no.s :").split(',')]
print(var1,var2,var3,sep=',')


#accepting a group of string from keyboard
lst=[x for x in input("enter names of ur friends:").split(' ')]
print(lst)


#accepting and displaying a list
lst1=eval(input("enter a list:"))
print(lst1)


#accepting and displaying atuple
tup=eval(input("enter a tuple:"))
print(tup)
