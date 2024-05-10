for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    a, b = sorted([a, b])
    c, d = sorted([c, d])
    e = list(range(a, b))
    if (c in e and not d in e) or (not c in e and d in e):
        print("YES")
    else:
        print("NO")