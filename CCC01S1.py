# C258TJKD69QAHSTJA

string = input()

buckets = {
    "C":[],
    "D":[],
    "H":[],
    "S":[]
}
for index, item in enumerate(string):
    if item in ["C", "D", "S", "H"]:
        current_suit = item
    else:
        # must be a card
        buckets[current_suit].append(item)

box = {
    "C":0,
    "D":0,
    "H":0,
    "S":0
}

for item in buckets:
    container = buckets[item]
    if len(container) == 0:
        # void
        box[item] = 3; continue
    elif len(container) == 1:
        # singleton
        box[item] = 2
    elif len(container) == 2:
        # doubleton
        box[item] = 1
    for card in container:
        if card == "A":
            box[item] += 4
        if card == "K":
            box[item] += 3
        if card == "Q":
            box[item] += 2
        if card == "J":
            box[item] += 1

print("Cards Dealt Points")
for t in buckets:
    if t == "C":
        print("Clubs", end = " ")
    if t == "D":
        print("Diamonds", end = " ")
    if t == "H":
        print("Hearts", end = " ")
    if t == "S":
        print("Spades", end = " ")
    for j in buckets[t]:
        print(j, end = " ")
    print(f" {box[t]}")
    
tt = 0
for i in box:
    tt += box[i]
print(f"Total {tt}")