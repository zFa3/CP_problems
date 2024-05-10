print("Ready")

while True:
    a = set(input())
    if set(a) == set(" "): break
    if a == set("pq") or a == set("db"):
        print("Mirrored pair")
    else:
        print("Ordinary pair")