from array import *
a=array('i',[1,2,3,4,5,6,7,8,9])
n=len(a)
b=a[1:4]
c=a[0:]
d=a[:4]
e=a[-4:]
f=a[-4:-1]
g=a[0:7:2]
print(a,b,c,d,e,f,g,sep='\n')


for i in a[2:5]:
    print(i,end=' ')