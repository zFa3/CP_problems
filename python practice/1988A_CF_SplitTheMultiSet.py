def sol():
    n, k = map(int, input().split())
    if n == 1:
        return 0
    if n == k or k > n:
        return 1
    counter = 0
    while True:
        n -= (k-1); counter += 1
        if n <= k:
            return counter + 1

for i in range(int(input())):
    print(sol())