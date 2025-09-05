for _ in range(int(input())):
    input()
    arr = list(map(int, input().split()))
    p1 = 0
    p2 = len(arr) - 1
    toggle = 1
    while p1 <= p2:
        print(arr[p1 if toggle else p2], end = " ")
        p1 += 1 if toggle else 0
        p2 -= 1 if not toggle else 0
        toggle = not toggle
    print()