for _ in range(int(input())):
    # numbers = [I for I in range(int(input()))]
    num = int(input())
    arr = list(map(int, input().split()))
    for m, j in enumerate(arr):
        print((j + 1) if j != num else 1, end= " ")
    print()