import sys
sys.setrecursionlimit(20001)
l = {}

for _ in range(int(input())):
    a, b = map(int, input().split())
    if a in l.keys():
        l[a].append(b)
    else:
        l[a] = [b]

def dfs(a, b, counter):
    ans = 1e9
    if not a in seen:
        seen.append(a)
        try:
            for i in l[a]:
                if i == b:
                    return counter
                ans = min(ans, dfs(i, b, counter + 1))
        except: pass
    return ans

while 1:
    a, b = map(int, input().split())
    if a == b == 0:
        break
    seen = []
    func = dfs(a, b, 0)
    if (func < 10000):
        print("Yes", func)
    else:
        print("No")