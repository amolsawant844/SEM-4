#a decorator to increase the value of a function by 2



def decor(fun):
    def inner():
        value=fun()
        return value+2
    return inner

def num():
    return 10

res=decor(num)
print(res())

