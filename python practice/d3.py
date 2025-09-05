for i in range(int(input())):
    n = int(input())
    arr = map(int, input().split())
    tt = 0
    for i, t in enumerate(sorted(arr)):
        if i % 2 == 0:
            tt += t
    print(tt)