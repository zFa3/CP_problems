def solve():
    passengers = int(input())
    arr = list(map(int, input().split()))
    p1 = arr[0] - 1
    p2 = arr[0] + 1
    for i, t in enumerate(arr[1:]):
        if t == p1:
            p1 = t - 1
        elif t == p2:
            p2 = t + 1
        else:
            return False
    return True
                
for _ in range(int(input())):
    print("YES" if solve() else "NO")