from abc import *
class myclass(ABC):
    @abstractmethod
    def connect(self):
        pass
    def disconnect(self):
        pass

class oracle(myclass):
    def connect(self):
        print("connecting to oracle database")
    def disconnect(self):
        print("disconnecting from oracle database")

class sql(myclass):
    def connect(self):
        print("connecting to sql database")
    def disconnect(self):
        print("disconnecting from sql database")

class db:
    str=input("enter the name of database")

    #convert string to class name
    classname=globals()[str]

    x=classname()
    x.connect()
    x.disconnect()

