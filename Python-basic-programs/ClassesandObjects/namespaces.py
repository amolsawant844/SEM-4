#modifying it in class namespace
class Student:
    n=10

print(Student.n)#10
s1=Student()
print(s1.n)#10
Student.n+=1 #modified it in class namespace
print(Student.n)#11
print(s1.n)#11



#modifyng it in instance namespace
class Sample:
    n=10

print(Sample.n)#10
s1=Sample()
print(s1.n)#10
s1.n+=1 #modified in the instance namespace
print(Sample.n)#10
print(s1.n)#11