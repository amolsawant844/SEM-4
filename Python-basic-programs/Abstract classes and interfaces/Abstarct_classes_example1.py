from abc import *
import math
class myclass(ABC):
    @abstractmethod
    def cal(self,x):
        pass



class sub1(myclass):
    def cal(self,x):
        print("square value:",x*x)

class sub2(myclass):
    def cal(self,x):
        print("squareroot value:",math.sqrt(x))

class sub3(myclass):
    def cal(self,x):
        print("cube value:",x**3)

o1=sub1()
o1.cal(4)
o2=sub2()
o2.cal(4)
o3=sub3()
o3.cal(4)