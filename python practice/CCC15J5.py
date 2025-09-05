n = int(input())
k = int(input())

m = dict()
def x(n, k, p):
    if n == k or n == 1 or k == 1:
        return 1
    total = 0
    if ((n, k, p) in m):
        return m[(n, k, p)]
    for i in range(p, n//k + 1):
        total += x(n - i, k - 1, i)
    m[(n, k, p)] = total
    return m[(n, k, p)]

print(x(n, k, 1))