for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    print(max([item for index, item in enumerate(arr) if index % 2 == 0]))