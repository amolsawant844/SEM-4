#single
class bank:
    cash=100000
    @classmethod
    def available_bal(cls):
        print(cls.cash)

class HDFC(bank):
    pass

class ICICI(bank):
    cash=200000
    @classmethod
    def available_bal(cls):
        print(cls.cash+bank.cash)


a=HDFC()
a.available_bal()

b=ICICI()
b.available_bal()



#multiple

class Father:
    def ht(self):
        print("ht is 6ft")

class Mother:
    def wt(self):
        print("wt is 45kg" )

class child(Father,Mother):
    pass

c=child()
print("childs inherited qualities\n")
c.ht()
c.wt()