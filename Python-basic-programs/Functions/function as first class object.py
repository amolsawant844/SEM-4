#assign a fucntion to a variable
def display(str):
    return 'heyy '+str
x=display('amol')
print(x)

#A functon inside another function
def display1(str):
    def message():
        return 'how are u ?'

    result=message()+str
    return result
print(display1("amol"))

#function as a parameter to another function

def display2(str):
    return 'heyy '+str

def message():
    return 'how r u?'

print(display2(message()))

#function returning another function
def display3():
    def message1():
        return 'how are u?'

    return message1()
fun=display3()
print(fun)