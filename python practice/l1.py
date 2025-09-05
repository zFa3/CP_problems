for i in range(int(input())):
    a, b, c, d = map(int, input().split())
    total = 0
    if (a > c and b >= d) or (a >= c and b > d):
        total += 2
    if (a > d and b >= c) or (a >= d and b > c):
        total += 2
    print(total)