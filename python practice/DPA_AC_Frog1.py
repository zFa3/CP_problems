a = int(input())
arr = list(map(int, input().split()))
dp = [0 for _ in range(a)]
for i in range(a - 1, -1, -1):
    if i == a - 1:
        dp[i] = 0
    elif i == a - 2:
        dp[i] = abs(arr[i] - arr[i + 1])
    else:
        dp[i] = min(abs(arr[i] - arr[i + 1]) + dp[i + 1], abs(arr[i] - arr[i + 2]) + dp[i + 2])

print(dp[0])