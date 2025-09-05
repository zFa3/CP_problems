for _ in range(int(input())):
    total = 0
    n, k = map(int, input().split())
    lengths = list(map(int, input().split()))
    lengths.pop(lengths.index(max(lengths)))
    for i in lengths:
        total += i + i - 1
    print(total)