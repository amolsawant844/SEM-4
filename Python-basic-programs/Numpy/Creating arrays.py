from numpy import *

#using array()...the normal way

#using linspace(start ,stop, n)
a=linspace(0,10,5)
b=linspace(0,10,6)
print(a,b,sep='\n')

#logspace(start,stop,n)
c=logspace(1,4,5)
print(c)

#arange(start,stop,stepsize)
a1=arange(10)
b1=arange(1,5)
c1=arange(1,10,2)
print(a1,b1,c1,sep='\n')

#zeroes and ones
f=zeros(5)
g=ones(3)
k=zeros(3,4)
j=ones(3,4)
r=eye(3)
print(f,g,k,j,r,sep='\n')

