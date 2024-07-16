for _ in range(int(input())):
    prev = None
    for i, t in enumerate(list(map(int, input()))):
        t = t if t != 0 else 10
        if i == 0:
            tt = t if t != 0 else 10
        else:
            tt += abs(t - prev) + 1
        prev = t
    print(tt)