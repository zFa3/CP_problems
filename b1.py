for t in range(int(input())):
    a = int(input())
    arr = list(map(int, input().split()))
    if len(set(arr)) == 1:
        print("NO")
    else:
        print("YES")
        esc = True
        for i in arr:
            if (arr.count(i) > 1 or len(set(arr)) > 2) and esc:
                esc = False
                print("R", end = "")
            else:
                print("B", end = "")
        print()