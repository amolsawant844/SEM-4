print(3 * 'heyy')
print("city name=" + "Hyderabad")
print("city name=", "Hyderabad")
a, b = 10, 15
print(a, b, sep=',')
print(a, b, sep=':')

# printing in next lines
print("hello")
print("dear")
print("how are you?")

# if we want to print in the same line
print("hello", end=' ')
print("dear", end=' ')
print("how are you?")

# if we want to print in the same line
print("hello", end='\t')
print("dear", end='\t')
print("how are you?")

# if we want to print in the same line
print("hello", end=':')
print("dear", end=':')
print("how are you?")

# %i and %d used for int representation
a = 10
b = 5
print('value of a= % i' %b , 'value of b= % i' % a)

# %s is used for string
s2 = "amol"
s1 = "Ish"
print("%s "%s2,"and %s are besties"  % s1)

#another waay of printing values
a="amol"
b="ish"
x=9.52
y=9.82
print("{0} got {1} pointer while {2} got {3} pointer".format(a,x,b,y))
print("{} got {} pointer while {} got {} pointer".format(a,x,b,y),end=' ')
print("but still amol is not jealous of her....because",end=' ')
print("amol won the smart india hackathon :P")







