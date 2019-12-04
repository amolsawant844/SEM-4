class Person:
    def __init__(self):
        self.name="amol"
    def display(self):
        print("name:",self.name)

    class Dob:
        def __init__(self):
            self.dd=12
            self.mm=10
            self.yy=1999
        def display(self):
            print("{}/{}/{}".format(self.dd,self.mm,self.yy))

p=Person()
p.display()
x=Person().Dob()
x.display()