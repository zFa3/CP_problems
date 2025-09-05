def main():
    n = int(input())
    mn, mx = 0, 1e9
    a = [item for item in (map(int, input().split()))]
    b = [item for item in a if item != 0]
    if b != sorted(b):
        return -1
    if a.count(0) == 0:
        if a == sorted(a):
            return 1
        else:
            return -1
    for i, t in enumerate(a):
        if i != 0:
            if t == 0:
                if i != len(a)-1:
                    if a[i+1] != 0:
                        mx = min(mx, a[i+1])
                if a[i-1] != 0:
                    mn = max(mn, a[i-1])
        else:
            if i != len(a)-1:
                if t == 0 and a[i+1] != 0:
                    mn = min(mn, a[i-1])
    #print(mx, mn + 1)
    return(mx - mn + 1)
if main() > 0:
    print("YES")
else:
    print("NO")
