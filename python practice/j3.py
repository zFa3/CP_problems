n, m = map(int, input().split())
arr = list(map(int, input().split()))
dp = [[], []]
counter = 0
anti_counter = 0
for i, t in enumerate(arr):
    counter += max(0, arr[i - 1] - arr[i])
    try:
        anti_counter += max(0, arr[n - i] - arr[n - i - 1])
    except: pass
    # if y - x is positive
    dp[0].append(counter)
    # else
    dp[1].append(anti_counter)
dp[1] = dp[1][::-1]
# print(dp)
for i in range(m):
    x, y = map(int, input().split())
    if y == x: print(0)
    else:
        if y - x > 0:  # if the starting index is left
            print(max(0, dp[0][y-1] - dp[0][x-1]))
        else:
            print(max(0, dp[1][y-1] - dp[1][x-1]))

# 7 6
# 10 8 9 6 8 12 7
# 1 2
# 1 7
# 4 6
# 7 1
# 3 5
# 4 2