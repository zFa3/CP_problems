while True:
    a, b = int(input()), int(input())

    if a // b:
        print(a // b)
        a -= (a // b) * b
    if a > 0:
        for i in range(1, a):
            if b % i == 0:
                b /= i
                a /= i
        print(f"{a} / {b}")
    else:
        print(0)