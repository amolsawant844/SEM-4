class myexception(Exception):
    def __init__(self,arg):
        self.msg=arg

def check(dict):
    for k,v in dict.items():
        print("name={} Balance={}".format(k,v))
        if(v<2000.00):
            raise myexception("balance account is less than the account of"+k)

bank={"raj":50000,"amol":788}
try:
    check(bank)
except myexception as me:
    print(me)