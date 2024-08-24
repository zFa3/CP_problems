for _ in range(int(input())):
    input()
    arr = list(map(int, input().split()))
    print(sum([abs(item) for item in arr]))
    