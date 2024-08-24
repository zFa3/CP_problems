m, n = map(int, input().split())
print(sum([2 if item > n else 1 for item in map(int, input().split())]))