for _ in range(int(input())):
    l, r, k = map(int, input().split())
    print(max(0, r//k - l + 1))
