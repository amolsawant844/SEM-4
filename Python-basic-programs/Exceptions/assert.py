#example1
try:
    x=int(input("enter a number btw 5 and 10"))
    assert x>=5 and x<=10
    print("the number entered:",x)

except AssertionError:
    print("the condition is not full fiilled")



#example2
try:
    x=int(input("enter a number btw 5 and 10"))
    assert x>=5 and x<=10,"your input is not coorect"
    print("the number entered:",x)

except AssertionError as obj:
    print(obj)
