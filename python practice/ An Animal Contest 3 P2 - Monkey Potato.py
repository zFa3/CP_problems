a, b = map(int, input().split())
l = set(map(int, input().split()))
l = sorted(l)
if len(l) == 1:
    if l[0] == 0:
        print(-1)
    else:
        print((str(l[0])) * a, sep = "")
elif a == 1:
    if len(l) == 1 and l[0] == 0:
        print(-1)
    elif l[0] == 0:
        print((str(l[1])) * a, sep = "")
    else:
        print((str(l[0])) * a, sep = "")
elif l[0] == 0 and a > 1:
    print(l[1], str(l[0]) * (a - 2), l[1], sep = "")
else:
    print((str(l[0])) * a, sep = "")