# inputs
a, k = map(int, input().split())
arr = list(map(int, input().split()))
dp = [0 for _ in range(a)]

for i in range(a - 1, -1, -1):
    if i == a - 1:
        # if we are at the start
        dp[i] = 0
    else:
        # get the minimum from 1 - k jumps
        dp[i] = min([abs(item - arr[i]) + dp[index + i + 1] for index, item in enumerate(arr[i + 1:min(a, i + 1 + k)])])

# print the optimal answer
print(dp[0])
