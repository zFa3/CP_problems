items, max_weight = map(int, input().split())
w = [0 for _ in range(items)]
c = [0 for _ in range(items)]
for i in range(items):
    a, b = map(int, input().split())
    w[i] += a
    c[i] += b
# dp[w][c] is the maximum value you can get with weight capacity
# of w and the first i items

dp = [[0 for i in range(items + 1)] for j in range(max_weight + 1)]
for i in range(items):
    for j in range(max_weight):
        if w[i] >= j:
            # if the item can fit in out backpack
            # if the item weight ≥ max weight
            # we take the max between 
            # dp[i][j - weights[i]]
            # and
            # dp[i][j]
            dp[i+1][j] = max(dp[i][j-w[i]], dp[i][j])
        else:
            # otherwise in this situation we cannot
            # store the item, and the max value does not
            # change. 
            dp[i+1][j] = dp[i][j]
print(dp)