for _ in range(int(input())):
    input()
    array = list(map(int, input().split()))
    print(len(array) - max(sorted([array.count(item) for item in set(array)])))