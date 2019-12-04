class Bird:
    wings=2
    @classmethod
    def fly(cls,name):
        print("{} flies with {} wings".format(name,cls.wings))

Bird.fly("sparrow")
Bird.fly("pigeon")