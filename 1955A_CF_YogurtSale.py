for _ in range(int(input())):
    a, b, c = map(int, input().split())
    if a == 1:
        print(b)
    else:
        if b < c/2:
            print(a * b)
        elif a % 2 == 0:
            print((a//2)*c)
        else:
            print((a//2)*c + b)