a, b = input().split()
c, d = input().split()
a, b, c, d = map(int, (a, b, c, d))
a -= 1; c -= 1
tick = 0
while True:
    tick += 1
    if tick % b == 0:
        c -= 1
    if tick % d == 0:
        a -= 1
    if not a or not c:
        break
if a:
    print(1)
elif c:
    print(2)
else:
    print(-1)