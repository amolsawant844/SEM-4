from array import *
a=array('i',[1,2,3,4,5,6,7,8,9])

#appends
a.append(10)
print("after appending 10 to the array:\n",a)

#insert(pos,num)
a.insert(0,0)
print("after inserting 0 at 0th location:\n",a )

#remove(element)
a.remove(0)
print("after removing 0:\n",a)

#pop()
a.pop()
print("after removing the last element:\n",a)

#finding the index of an element
b=a.index(4)
print("index of no. 4 is:",b)

#converting to a list
lst=a.tolist()
print("list is:",lst)
