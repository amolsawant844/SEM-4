from numpy import *

arr=array([[4,12,3],[41,15,0]])
mat=matrix(arr)
print(arr,mat,sep='\n')
#diagonal elements of matrix
print(diagonal(mat))
#mx min sum
print("max:",mat.max(),"min:",mat.min(),"sum:",mat.sum())

#sort
print(sort(mat))

#transpose
print(mat.transpose())


#accepting a matrix
r,c=[int(x) for x in input("enter row and column:").split()]
str=input("enter matrix elements:\n")
x=reshape(matrix(str),(r,c))
