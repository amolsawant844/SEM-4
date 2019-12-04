def da(basic):
    da=basic*80/100
    return da
def hra(basic):
    hra=basic*15/100
    return hra
def pf(basic):
    pf=basic*12/100
    return pf
def itax(gross):
    tax=gross*0.1
    return tax

basic=float(input("enter basic salary of employee:"))
gross=basic + da(basic) +hra(basic)
print("your gross salary is:",gross)
net=gross-pf(basic)-itax(gross)
print("your net salary is:",net)