from numpy import *

a=array([1,2,3,4,5])

b=a[1:4:2]
c=a[::]
d=a[-2:2:-1]
e=a[:-2:]
print(b,c,d,e,sep='\n')



#2dimension
f=array([[1,2,3],[4,5,6]])
print(f)
#3 dimension
g=array([[[1,2,3],[4,5,6]],[[7,8,9],[10,11,12]]])
print(g)

#2dimension
a1 = array([[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]])
print(a1[:,:])
print(a1[:])
print(a1[ : : ])
print(a1[0:2,0:2])
print(a1[0:3,0:2])
