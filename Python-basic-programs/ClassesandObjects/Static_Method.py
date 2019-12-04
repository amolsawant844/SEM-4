#program to count the no. of instance created

class Myclass:
    n=0
    def __init__(self):
        Myclass.n=Myclass.n +1

    @staticmethod
    def noofobjetcs():
        print("no. of instances created :",Myclass.n)

obj1=Myclass()
obj2=Myclass()
obj3=Myclass()
Myclass.noofobjetcs()