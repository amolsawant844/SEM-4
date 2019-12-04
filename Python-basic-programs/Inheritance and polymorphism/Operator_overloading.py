class Bookx:
    def __init__(self,pages):
        self.pages=pages

    def __add__(self, other):
        return self.pages +other.pages

class Booky:
    def __init__(self,pages):
        self.pages=pages

b1=Bookx(100)
b2=Booky(150)
print("additon:",b1+b2)

class Bookx:
    def __init__(self,pages):
        self.pages=pages

    def __mul__(self, other):
        return self.pages * other.pages

class Booky:
    def __init__(self,pages):
        self.pages=pages

b1=Bookx(100)
b2=Booky(150)
print("additon:",b1*b2)