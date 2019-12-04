from abc import *
class car(ABC):
    def __init__(self,regno):
        self.regno=regno

    def opentank(self):
        print("fill the fuel into the tank")
        print("for the car with regno",self.regno)

    @abstractmethod
    def steering(self):
        pass
    @abstractmethod
    def braking(self):
        pass

class maruti(car):
    def steering(self):
        print("maruti uses manual steering ")
        print("drive the car")

    def braking(self):
        print("maruti uses hydraulic brakes")
        print("apply brakes and stop it")

m=maruti(1001)
m.opentank()
m.steering()
m.braking()


class santro(car):
    def steering(self):
        print("santro uses manual steering ")
        print("drive the car")

    def braking(self):
        print("santro uses hydraulic brakes")
        print("apply brakes and stop it")


s = santro(100)
s.opentank()
s.steering()
s.braking()