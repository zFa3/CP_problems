directions = [-17, -15, -10, -6, 6, 10, 15, 17]
a, b = map(lambda x : int(x) - 1, input().split())
c, d = map(lambda x : int(x) - 1, input().split())

def legal_moves(pos):
    newMoves = []
    for i in directions:
        if (abs((pos % 8) - (pos + i) % 8) < 3 and abs((pos / 8) - (pos + i) / 8) < 3 and (pos + i > -1) and (pos + i < 64)):
            newMoves.append(pos + i)
    return newMoves

def search(pos):
    visited = []
    queue = [(pos, 0)]
    while (len(queue)):
        position = queue.pop(0)
        visited.append(position[0])
        if position[0] == c * 8 + d:
            return position[1]
        for i in legal_moves(position[0]):
            if i not in visited:
                queue.append((i, position[1] + 1))

print(search(a * 8 + b))