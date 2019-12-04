from array import *
x=array('i',[])
print("enter no. of elements",end=' ')
n=int(input())

for i in range(n):
    print("enter element:",end=' ')
    x.append(int(input()))


#searching
print("enter the element to be searched:",end=' ')
a=int(input())
c=0
for i in range(n):
    if(a==x[i]):
        print("element found at:",i+1)
        c=1
if(c==0):
    print("element not found")


#sorting
flag=False
for i in range(n):
    for j in range(n-1-i):
        if(x[j]>x[j+1]):
            temp=x[j]
            x[j]=x[j+1]
            x[j+1]=temp
            flag=True
    if(flag==False):
        break
    else:
        flag=False

print("sorted array:",x)