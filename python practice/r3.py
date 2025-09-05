# 3
# 2
# 3 8
# 2
# 5 6
# 6
# 1 2 3 4 5 10

def check(arr):
    return len(arr) == 2 and (abs(arr[0] - arr[1]) > 1)

for _ in range(int(input())):
    length = int(input())
    arr = list(map(int, input().split()))
    print("YES" if check(arr) else "NO")