#accessor (get_methods) and mutator(Set_methods) methods
class Student:

    def setName(self,name):
        self.name=name
    def getName(self):
        return self.name
    def setMarks(self,marks):
        self.marks=marks
    def getMarks(self):
        return self.marks

n=int(input("how many Students?"))
i=0
while(i<n):
    s=Student()
    name=input("enter your name\n")
    s.setName(name)
    marks = input("enter your marks\n")
    s.setMarks(marks)

    print("hi",s.getName())
    print("your marks",s.getMarks())

    i+=1
    print("===================")