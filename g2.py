for _ in range(int(input())):
    a = input()
    if len(a) == 1:
        print(a, "a" if a != "a" else "b", sep = "")
    else:
        x, y = -1, -2
        for i, t in enumerate(a):
            if i > 0:
                if t == a[i - 1]:
                    x, y = i, i - 1
                    break
        char = chr([i for i in range(100, 105) if not i in (ord(a[x]), ord(a[y]))][0])
        print(a[:x], char, a[y+1:], sep = '')