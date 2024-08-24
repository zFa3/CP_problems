m, n = map(int, input().split())
arr = map(int, input().split())
arr = list(sorted(arr))
Min = arr[0]
for i in range(1, n):
    if arr[i] < 0:
        Min += arr[i]
    else:
        break
print(abs(min(Min, 0)))