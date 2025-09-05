import sys
sys.setrecursionlimit(100000)

rows, cols = int(input()), int(input())
ab = [-cols, cols, -1, 1]
total = ""
counted = set()
for _ in range(rows):
    total += input()

r, c = int(input()), int(input())

def flood_fill2(spots: list):
    next_set = []
    for index in spots:
        if index not in counted and total[index] != "*":
            next_set += [index + ab[j] for j, b in enumerate(adj_squares2(index)) if b]
            counted.add(index)
    if next_set:
        flood_fill2(next_set)

def adj_squares2(sq):
    a = [True, True, True, True]
    if sq < cols:
        a[0] = False
    if sq >= (rows - 1) * cols:
        a[1] = False
    if sq % cols == 0:
        a[2] = False
    if sq % cols == cols - 1:
        a[3] = False
    return a

def find_profit(spots):
    profit = 0
    pumpkins = {"S":1,"M":5,"L":10}
    for index in spots:
        profit += pumpkins[total[index]]
    return profit

flood_fill2([r * cols + c])
print(find_profit(counted))
