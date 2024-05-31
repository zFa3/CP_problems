num, letters = [], []
c = False
def ans():
    global c
    input(); password = input()
    for i, t in enumerate(password):
        if t.isdigit():
            num.append(t)
            if c:
                print("NO"); return
        elif t.isalpha():
            letters.append(t)
            c = True
    #print(num, sorted(num), num == sorted(num), [ord(i) for i in letters], sorted([ord(i) for i in letters]), [ord(i) for i in letters] == sorted([ord(i) for i in letters]))
    if num == sorted(num) and [ord(i) for i in letters] == sorted([ord(i) for i in letters]):
        print("YES")
    else:
        print("NO")
    return
for _ in range(int(input())):
    c = False
    num, letters = [], []
    ans()
