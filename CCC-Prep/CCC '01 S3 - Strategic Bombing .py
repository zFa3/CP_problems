# CCC '01 S3 - Strategic Bombing
adjList = {}

for i in range(26):
    adjList[chr(i + 65)] = []

def bfs():
    visited = set()
    queue = []
    queue.append("A")
    while (len(queue)):
        currentCity = queue.pop(0)
        if currentCity == 'B':
            return True
        for nextCity in adjList[currentCity]:
            if not nextCity in visited:
                visited.add(nextCity)
                queue.append(nextCity)
    return False

inpt = ""
while (True):
    inpt = input()
    if inpt == "**":
        break
    adjList[inpt[0]].append(inpt[1])
    adjList[inpt[1]].append(inpt[0])


counter = 0
for i in adjList:
    for n, j in enumerate(adjList[i]):
        x = j
        adjList[i][n] = i
        answer = bfs()
        adjList[i][n] = x
        if bfs() and not answer:
            print(i + j)
            counter += 1
print(f"There are {counter} disconnecting roads.")