class Enemy:
    def __init__(self,x):
        self.energy=x
    def get_energy(self):
        print(self.energy)
amol=Enemy(1000)
sandy=Enemy(500)
amol.get_energy()
sandy.get_energy()