try:
    f=open("myfile","w")
    a,b=[int(x) for x in input("enter two numbers:").split()]
    c=a/b
    f.write("writing %d into myfile" %c)

except ZeroDivisionError:
    print("division by zero happened")
    print("please do not enter 0 in input")

finally:
    f.close()
    print("file closed")