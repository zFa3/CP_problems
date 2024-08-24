for _ in range(int(input())):
    input()
    arr = list(map(int, input()))
    if (arr.count(1) == 2 and arr[arr.index(1) + 1]) or arr.count(1) % 2 == 1:
        print("NO")
    else:
        print("YES")