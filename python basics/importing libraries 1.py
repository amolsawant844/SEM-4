import random
playerhp=260
enemyattkl=60
enemyattkh=80
while playerhp>0:
    dmg=random.randrange(enemyattkl,enemyattkh)
    playerhp=playerhp-dmg
    if playerhp<=0:
        playerhp=0
    print("enemy strikes for",dmg,"points of damage.current hp is",playerhp)
    if playerhp==0:
        print("you have died")