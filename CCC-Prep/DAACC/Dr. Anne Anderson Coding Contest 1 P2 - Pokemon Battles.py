enemyType = input()
types = {
    "WATER" : ["FIRE", "GRASS"],
    "FIRE" : ["GRASS", "WATER"],
    "GRASS" : ["WATER", "FIRE"]
}
maxDmg = 0
for _ in range(int(input())):
    info = input().split()
    if info[1] == types[enemyType][1]:
        maxDmg = max(maxDmg, int(info[0]) * 2)
    elif info[1] == types[enemyType][0]:
        maxDmg = max(maxDmg, int(int(info[0]) * 0.5))
    else:
        maxDmg = max(maxDmg, int(info[0]))
print(maxDmg)
