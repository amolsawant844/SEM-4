from numpy import *
a=array([1,2,3,4,5])
b=array([2,4,5,6,7])

#comparison
c= a==b
d=a>=b
e=a<=b
print(c,d,e,sep='\n')

#any() and all()
print("if any of it is true:",any(c))
print("if all elements aree true:",all(e))

#logical_and(),logical_not(),logical_or()....
f=logical_and(a>0,a<3)
g=logical_or(b>0,b<10)
h=logical_not(b)
print(f,g,h,sep='\n')


#where(expression,condition1,condition2)
i=where(a%2==0,True,False)
print(i)

