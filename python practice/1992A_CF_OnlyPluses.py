for _ in range(int(input())):
    a = list(map(int, input().split()))
    for _ in range(5):
        a[a.index(min(a))] += 1
    print(a[0] * a[1] * a[2])