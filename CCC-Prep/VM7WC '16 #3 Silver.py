a, b, c, d = map(int, input().split())

dct = {}
for i in range(a):
    dct[i + 1] = []

for _ in range(b):
    a, b = map(int, input().split())
    dct[a].append(b)
    dct[b].append(a)

def bfs():
    visited = set()
    queue = []
    queue.append(c)
    while (len(queue)):
        currentCity = queue.pop(0)
        if currentCity == d:
            return True
        for nextCity in dct[currentCity]:
            if not nextCity in visited:
                visited.add(nextCity)
                queue.append(nextCity)
    return False

print("GO SHAHIR!" if bfs() else "NO SHAHIR!")