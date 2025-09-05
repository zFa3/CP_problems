a, b = map(int, input().split())
tot = 0
for _ in range(a):
    x, y = map(int, input().split())
    tot = (tot + x * y) % b
print(tot)
