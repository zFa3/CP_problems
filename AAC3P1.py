a, b, c, d = map(int, input().split())

if b - a > 0:
    if d - c > 0:
        print("Go to the department store")
    else:
        print("Go to the grocery store")
elif d - c > 0:
    print("Go to the pharmacy")
else:
    print("Stay home")