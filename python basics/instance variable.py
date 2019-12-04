class enemy:
    def __init__(self,atkl,hp):
        self.atkl=atkl
        self.hp=hp
    def getatk(self):
        print("atk is",self.atkl)
    def gethp(self):
        print("hp is",self.hp)
enemy1=enemy(40,49)
enemy1.getatk()
enemy1.gethp()
enemy2=enemy(75,90)
enemy2.getatk()
enemy2.gethp()