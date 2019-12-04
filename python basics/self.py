'''
when you create a function inside a class it is called as method
when you give parameter to that function it always take self first and then rest other
'''
class Amol:
    def sawant(self,name):
        self.name=name
    def disp(self):
        return self.name
    def saying(self):
        print("hello",self.name)
first=Amol()
second=Amol()
first.sawant("SAHIL")
second.sawant("archana")
first.saying()
second.saying()