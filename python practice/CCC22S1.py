tt = 0
a = int(input())
for b in range(a//5 + 1):
    if (a - b * 5) % 4 == 0:
        tt += 1
print(tt)