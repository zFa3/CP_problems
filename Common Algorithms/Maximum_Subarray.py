arr = list(map(int, input().split()))
Max = 0; best = 0
for i in arr:
    Max = max(i, i + Max); best = max(best, Max)
print(best)
