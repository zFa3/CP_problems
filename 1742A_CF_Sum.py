for _ in range(int(input())):
    a = list(map(int, input().split()))
    if sum(a) / 2 in a:
        print("YES")
    else:
        print("NO")