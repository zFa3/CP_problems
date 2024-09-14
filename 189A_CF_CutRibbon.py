import sys
sys.setrecursionlimit(10000)

a, b, c, d = map(int, input().split())

memo = {}
def maximum(x):
    if x == 0:
        return 0
    if x in memo:
        return memo[x]
    return max(maximum(x - b) + 1, maximum(x - c) + 1, maximum(x - d) + 1)

print(maximum(a))