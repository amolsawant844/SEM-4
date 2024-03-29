class A:
    def method(self):
        print("A class method")
        super().method()

class B:
    def method(self):
        print("B class method")
        super().method()

class C:
    def method(self):
        print("C class method")
        super().method()

class X(A,B):
    def method(self):
        print("X class method")
        super().method()

class Y(B,C):
    def method(self):
        print("Y class method")
        super().method()

class P(X,Y,C):
    def method(self):
        print("P class method")
        super().method()

p=P()
p.method()
print(P.mro())