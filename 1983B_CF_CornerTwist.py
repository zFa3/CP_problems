def sol():
    r, c = map(int, input().split())
    a = []; b = []
    for _ in range(r):
        a.append(list(map(int, list(input())))) 
    for _ in range(r):
        b.append(list(map(int, list(input())))) 
    #print(a, b)
    for i, t in enumerate(b):
        if sum(t) % 3 != sum(a[i]) % 3:
            return "NO"
    for i in range(c):
        if sum([b[j][i] for j in range(r)]) % 3 != sum([a[j][i] for j in range(r)]) % 3:
            return "NO"
    return "YES"

for _ in range(int(input())):
    print(sol())