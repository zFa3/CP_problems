for _ in range(int(input())):
    input()
    arr = list(map(int, input().split()))
    print(sum([item for index, item in enumerate(arr) if index % 2 == 0]) - sum([item for index, item in enumerate(arr) if index % 2 == 1]))