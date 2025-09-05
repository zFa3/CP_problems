ct = 0
a, b, c, d = map(int, input().split())
if d < c * b:
    ct += (a // b) * d
    a -= (a // b) * b
    if a == 0:
        pass
    else:
        ct += min(c * a, d)
    print(ct)
else:
    print(a * c)