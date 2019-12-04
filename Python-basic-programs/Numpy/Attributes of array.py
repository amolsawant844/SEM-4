from numpy import *
a=array([1,2,3,4])
b=array([[1,2,3,4],[5,6,7,8]])

#ndim-dimension

print(a.ndim)
print(b.ndim)

#shape

#if 1d returns column no.
#if 2d return RxC
#it can also change the shape of array

print(a.shape)
print(b.shape)

b.shape=(4,2)
print(b)

#size--returns the total no. of elements

#reshape()changes the shape of array
c=b.reshape(2,4)
print(c)
d=b.reshape(1,8)
print(d)


#flatten()makes it single dimension
print(c.flatten())
