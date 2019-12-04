class Student:
    def __init__(self,n,a,m):
        self.name =n
        self.age = a
        self.marks = m

    def talk(self):
        print("hi i am ", self.name)
        print("my age is", self.age)
        print("my marks are", self.marks)

s1 = Student("amol",19,100)
s1.talk()