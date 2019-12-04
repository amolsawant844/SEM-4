# there is no such concept as call by value and call by reference in python

#int,float,strings,and tuples are immutable
def modify(x):
    x=15
    print(x,id(x))

x=10
modify(x)#will print a diff value
print(x,id(x))#will print a diff value


#since list and dictionaries are mutable
def modify(x):
    x.append(9)
    print(x,id(x))

x=[1,2,3,4]
modify(x)#will print a  value
print(x,id(x))#will print the  same value

#when altogether a new object is created
def modify(x):
    x=[10,11,12]
    print(x,id(x))

x=[1,2,3,4]
modify(x)#will print a  value
print(x,id(x))#will not print the  same value
