def check(a):
    if a < 2020:
        return 0
    if a % 2020 == 0 or a % 2021 == 0:
        return 1
    for i in range(a//2020 + 1):
        if (a - (2020 * i)) % 2021 == 0:
            return 1
    return 0
    
    
for _ in range(int(input())):
    print("YES" if check(int(input())) else "NO")