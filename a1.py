def ad():
    a = list(map(int, input().split()))
    prev = a[0] - 5
    for i in a:
        if not (abs(i - prev) == 5 or abs(i - prev) == 7):
            return False
        prev = i
    return True

for _ in range(int(input())):
    input()
    print("YES" if ad() else "NO")