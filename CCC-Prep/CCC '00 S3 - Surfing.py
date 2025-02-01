def BFS(startNode, endNode):
    keys = sites.keys()
    qu = [startNode]
    visited = set()
    while (len(qu)):
        currentNode = qu.pop(0)
        if currentNode == endNode:
            print(f"Can surf from {startNode} to {endNode}.")
            return 0
        if currentNode in keys:
            for i in sites[currentNode]:
                if not i in visited:
                    visited.add(i)
                    qu.append(i)
    print(f"Can't surf from {startNode} to {endNode}.")

pages = int(input())
sites = {}
for i in range(pages):
    url = input()
    while True:
        html = input()
        if html == "</HTML>":
            break
        links = html.split("<A HREF=\"")
        for i in links:
            if i.count("\""):
                if url in sites.keys():
                    sites[url].append(i.split("\"")[0])
                else:
                    sites[url] = [i.split("\"")[0]]

for i in sites.keys():
    for j in sites[i]:
        print(f"Link from {i} to {j}")

while True:
    site1 = input()
    if (site1 == "The End"):
        break
    site2 = input()
    BFS(site1, site2)
