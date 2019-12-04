class Student:

    def __init__(self,n,m):
        self.name=n
        self.marks=m

    def disp(self):
        print("hi",self.name)
        print("your marks",self.marks)

    def cal(self):
        if(self.marks>=600):
            print("you got first grade")
        elif(self.marks>=500):
            print("you got second grade")
        elif (self.marks >= 350):
            print("you got third grade")
        else:
            print("you failed")


n=int(input("how many Students?"))
i=0
while(i<n):
    name=input("enter your name")
    marks=int(input("enter ur marks"))

    s=Student(name,marks)
    s.disp()
    s.cal()
    i+=1
    print("--------------------------------------")
