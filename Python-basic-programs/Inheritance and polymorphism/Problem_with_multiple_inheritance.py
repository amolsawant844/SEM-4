class a:
    def __init__(self):
        self.a='a'
        print(self.a)

class b:
    def __init__(self):
        self.b='b'
        print(self.b)

class c(a,b):
    def __init__(self):
        self.c='c'
        print(self.c)
        super().__init__()

obj=c()

"""
as u can see class c inherits two classes a and b and then calls init method  of the super class 
but only init method of class a gets executed while that of c doesnt get executed


if we write class c(b,a): instead of the above statement then init meethod of class b 
would have been executed 

solution to this problem is MRO 
"""