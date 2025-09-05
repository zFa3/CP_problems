for _ in range(int(input())):
    a = int(input())
    arr = list(map(int, input().split()))
    print((a - 1) * (max(arr) - min(arr)))