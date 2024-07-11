for _ in range(int(input())):
    n, m, k = map(int, input().split())
    a, b = set([i for i in range(k, n + 1)]), set([i + 1 for i in range(n)])
    for i in [i for i in range(k, n + 1)][::-1]:
        print(i, end = " ")
    ans = [i + 1 for i in range(m)]
    for i in b.difference(a).difference(set(ans)):
        print(i, end = " ")
    for i in ans:
        print(i, end = " ")
    print()