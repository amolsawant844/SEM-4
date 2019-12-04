x=15.56
y=int(x)
print(y)

num1=15
num2=float(num1)
print(num1)

n=10
print(complex(n))

a=10
b=5
print(complex(a,b))

#conversion of no.s to octal binary....
a=10
print("In decimal:",a)
print("In Binary:",bin(a))
print("In octal:",oct(a))
print("In Hexadecimal:",hex(a))

#conversion from other types to decimal
s1="17"
s2="1110010"
s3="1c2"
f=int(s1,8)
f1=int(s2,2)
f2=int(s3,16)
print(f,f1,f2)

#conversion from other types to decimal
n1=0o17
n2=0B1110010
n3=0X1c2
print("octal 17=",n1)
print("binary 1110010=",n2)
print("hexadecimal 1c2=",n3)