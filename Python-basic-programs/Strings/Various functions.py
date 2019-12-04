"""
#removing spaces
#rstrip-removes spaces from the right
#lstrip removes spaces from the left
#strip removes spaces from both side
sp=" hi amol "
print(sp.strip())


#finding sub string
#find(substring,beginning,ending)
str=input('enter main string:')
sub=input('enter string to find:')
n=str.find(sub,0,len(str))
print(n)
#counting total no. of substrings
print(str.count(sub,0,len(str)))


#replacing a substring
strmain="hi amol good morning"
str="amol"
strrep="sahil"
str1=strmain.replace(str,strrep)
print(str1)

#splitting and joining strngs
#str.split(',') breaks the string into list where a comma is encountered

s='one,two,three'
lst=s.split(',')
print(lst)


#join()
s1=('one','two','three')
s2="--".join(s1)
print(s2)

#changing cases
str="Python is bae"
print(str.upper())#convert all letters to upper case
print(str.lower())#convert all letters to lower case
print(str.swapcase())#convert all lower letters to upper case and all upper to lower
print(str.title())#coverts the starting letter of each word to upper

#checking starting and ending of the string
str="this is python "
print(str.startswith('This'))
print(str.endswith("python "))

"""

#sorting the strings
n=int(input("no. of strings?:"))
str=[]
for i in range(n):
    print("enter a string:",end='')
    str.append(input())

str1=sorted(str)
print(str1)


