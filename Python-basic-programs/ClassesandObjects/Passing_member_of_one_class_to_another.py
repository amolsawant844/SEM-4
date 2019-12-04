class Emp:
    def __init__(self,id,name,sal):
        self.id=id
        self.name = name
        self.sal = sal
    def display(self):
        print("id:",self.id)
        print("name:", self.name)
        print("sal:", self.sal)

class Myclass:
    @staticmethod
    def mymethod(e):
        e.sal+=1000
        e.display()


e=Emp(101,"amol",100000)
e.display()
Myclass.mymethod(e)
