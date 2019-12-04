from program_to_calculate_grossandnet_sal_of_employee import *
print("enter your basic salary:")
sal=float(input())
gross=sal + da(sal) +hra(sal)
print("your gross salary is:",gross)
net=gross-pf(sal)-itax(gross)
print("your net salary is:",net)