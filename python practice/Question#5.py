rows, cols = int(input()), int(input())

searched = []
total = ""
for _ in range(rows):
    total += input()

r, c = int(input()), int(input())

def adj_squares(sq):
    a = []
    if sq > cols:
        a.append(-cols)
    if sq <= (rows - 1) * cols:
        a.append(cols)
    if sq % cols != 0:
        a.append(-1)
    if sq % cols != cols - 1:
        a.append(1)
    return a

def flood_fill(q):
    global searched
    queue = set()
    if q:
        for i in q:
            if not i in searched:
                searched.append(i)
                for j in adj_squares(i):
                    try:
                        if total[i + j] != "*":
                            queue.add(i + j)
                    except IndexError: pass
        flood_fill(queue)

def find_profit(spots):
    profit = 0
    pumpkins = {
        "S":1,
        "M":5,
        "L":10
    }
    for i in spots:
        profit += pumpkins[total[i]]
    return profit

flood_fill([((r) * cols + (c))])

print(find_profit(searched))