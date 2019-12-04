#actual and formal arguements
def sum(a,b):#a,b are formal arguments
    c=a+b
    return c
d=sum(10,15)#10,15 are actual arguments
print(d)


#keyword arguments
def grocery(item,price):
    print("the price of ",item,"is: ",price)

grocery(item="rice",price=12)

#variable length arguments
def add(farg,*args):#here args can take 0 or more values the values are stored in a tuple
    print("formal argument:",farg)
    s=0
    for i in args:
        s=s+i
    print("sum of all no.s in args:",s)
add(105,5,6,7,)
add(105,2,3,4,5,7,8,9,7)

#keyword variable arguement
def disp(farg, **kargs):#values are stored in dictionary
    print("formal argument:",farg)

    print("keyword variable arguement")
    for x,y in kargs.items():
        print('key={},value={}'.format(x,y))


disp(12,rollno=104,name="amol")
disp(13,id=14,id1=14)
