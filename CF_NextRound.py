n = int(input().split()[1])
k = list(map(int, input().split()))
l = list(map(lambda x: x >= k[n - 1] and x > 0, k))

print(l.count(True))