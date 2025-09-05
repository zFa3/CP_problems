def lcs(a, b):
    m, n = len(a), len(b)
    dp = [[0] * (n+1) for _ in range(m+1)]
    for i in range(m):
        for j in range(n):
            if a[i] == b[j]: dp[i+1][j+1] = dp[i][j] + 1
            else: dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j])
    longestseq = ""; m -= 1; n -= 1
    while (((m+1) > 0) and ((n+1) > 0)):
        if a[m] == b[n]: longestseq += a[m]
        elif not dp[m][n+1] < dp[m+1][n]: n += 1
        else: m += 1
        n -= 1; m -= 1
    return longestseq
print(lcs(input(), input())[::-1])