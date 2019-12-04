#calculating square of a number
f= lambda x:x*x
print(f(5))

#calculating sum of two no.s
sum=lambda x,y: x+y
print(sum(10,15))

#filter(function,sequence)
lst=[10,12,23,34,5,6,70]
lst1=list(filter(lambda x: (x%2==0),lst))
print(lst1)

#map(function,sequence)
lst=[10,12,23,34,5,6,70]
lst1=list(map(lambda x: x*x,lst))
print(lst1)

#resuce(function,sequence)
from functools import *
lst=[10,12,23,34,5,6,70]
lst1=(reduce(lambda x,y: x*y,lst))
print(lst1)
