for _ in range(int(input())):
    a, b, c = map(int, input().split())
    if c < b:
        print(1)
    else:
        g = 1 if (a%b) else 0
        print(int(a/b) + g)