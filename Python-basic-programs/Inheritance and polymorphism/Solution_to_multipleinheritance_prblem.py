class a:
    def __init__(self):
        self.a='a'
        print(self.a)
        super().__init__()

class b:
    def __init__(self):
        self.b='b'
        print(self.b)
        super().__init__()

class c(a,b):
    def __init__(self):
        self.c='c'
        print(self.c)
        super().__init__()

obj=c()