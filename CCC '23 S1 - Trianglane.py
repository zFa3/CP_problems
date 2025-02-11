length = int(input())
top = []
bottom = []
v = input().split()
w = input().split()
for _ in range(length):
    top.append(v[_] == "1")
for _ in range(length):
    bottom.append(w[_] == "1")

edges = 0
double = False
for i in top:
    edges += 3 * i
    edges -= double * i * 2
    double = i
double = False
for i in bottom:
    edges += 3 * i
    edges -= double * i * 2
    double = i
for i in range(length):
    if top[i] and bottom[i]:
        edges -= 2 * (i % 2 == 0)
print(edges)
