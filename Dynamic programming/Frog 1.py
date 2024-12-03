# get the input
a = int(input())
arr = list(map(int, input().split()))

# init dp array
dp = [0 for _ in range(a)]

for i in range(a - 1, -1, -1):
    if i == a - 1:
        # at the start
        dp[i] = 0
    elif i == a - 2:
        # can only jump over 1
        dp[i] = abs(arr[i] - arr[i + 1])
    else:
        # choose between jumping over 1 and jumping over 2
        dp[i] = min(abs(arr[i] - arr[i + 1]) + dp[i + 1], abs(arr[i] - arr[i + 2]) + dp[i + 2])

print(dp[0])