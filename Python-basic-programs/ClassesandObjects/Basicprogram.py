class Student:
    def __init__(self):
        self.name='Vishnu'
        self.age=20
        self.marks=900

    def talk(self):
        print("hi i am ",self.name)
        print("my age is",self.age)
        print("my marks are",self.marks)


s1=Student()
s1.talk()