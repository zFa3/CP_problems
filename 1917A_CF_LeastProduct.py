for _ in range(int(input())):
    length = int(input())
    lst = list(map(int, input().split()))
    if lst.count(0):
        print(0)
        continue
    elif sum([item < 0 for item in lst]) == 0:
        print(1)
        print("1 0")
    elif sum([item < 0 for item in lst]) % 2 == 0:
        for t, i in enumerate(lst):
            if i < 0:
                print(1)
                print(f"{t + 1} {0}")
                break
    else:
        print(0)
        continue

'''

4
1
155
4
2 8 -1 3
4
-1 0 -2 -5
4
-15 -75 -25 -30

'''