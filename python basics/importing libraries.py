import re
s=" 'I AM NOT YELLING', she said .though we knew it to not to be true."
new=re.sub('[A-Z]',' ',s)
r=re.sub('[a-z]',' ',s)
print(new)
print(r)
