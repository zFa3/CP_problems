for _ in range(int(input())):
    n, m = map(int, input().split())
    arr = []
    for i in range(n):
        arr += list(map(int, input().split()))
    if n == m == 1:
        print(-1)
    else:
        for i in range(n):
            for j in range(m):
                if (arr[i * m + j] + 1) > n * m:
                    print(1, end = " ")
                else:
                    print((arr[i * m + j] + 1), end = " ")
            print()