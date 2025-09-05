def check():
    input()
    arr = list(map(int, input().split()))
    if arr.count(1) % 2: return 0
    half = sum(arr)//2
    total = 0
    for i in sorted(arr, reverse = 1):
        if total + i <= half:
            total += i
        if total == half:
            return 1
    return 0

for _ in range(int(input())):
    print("YES" if check() else "NO")