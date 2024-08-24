def solve():
    array = zip(input(), input())
    for j in array:
        if j == ("1", "1"):
            return False
    return True
            
for i in range(int(input())):
    input()
    print("YES" if solve() else "NO")