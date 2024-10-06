for _ in range(int(input())):
    input()
    arr = list(map(int, input().split()))
    arr = sorted(arr)
    while (len(arr) != 1):
        # print(arr)
        arr = [(arr[0] + arr[1]) // 2] + arr[2:]
    print(arr[0])