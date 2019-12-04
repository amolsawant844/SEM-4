import array

# creation
a = array.array('i', [4, 6, 2, 9])
print(a)

import array as ar
b=ar.array('i', [4, 6, 2, 9])
print(b)

from array import *
c=array('i',[3,45,67,89])
print(c)


#for character array
d=array('u',['a','b','c','d'])
print("the array elements are:")
for i in d:
    print(i)

#single dimension
marks=array('i',[1,2,3,4,5])
#multi dimesion
marksmulti=array([[1,2,3,4],[5,6,7,8],[9,10,11,12]])
print("single dimesion",marks)
print("multi dimension",marksmulti)