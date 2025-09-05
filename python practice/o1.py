for _ in range(int(input())):
    input()
    arr = list(map(int, input().split()))
    arr = sorted(arr)
    print(abs(arr[-1] - arr[0]) + abs(arr[0] - arr[-2]) + abs(arr[-2] - arr[1]) + abs(arr[1] - arr[-1]))