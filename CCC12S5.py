# mouse journey

def paths(row, col):
    # if we have already calculated this path
    if (row, col) in memo:
        # return the previously calculated path
        return memo[(row, col)]
    
    # if we are at the bottom right, return 1 path
    if row == rows and col == cols:
        return 1
    
    # if we are in a cell with a cat, return 0 paths
    if (row, col) in cats:
        return 0
    
    # otherwise, we can recursively check how many paths there are
    total = 0
    if row != rows:
        total += paths(row + 1, col)
    if col != cols:
        total += paths(row, col + 1)
    memo[(row, col)] = total
    return total

rows, cols = map(int, input().split())
cats = []
memo = {}

for _ in range(int(input())):
    a, b = map(int, input().split())
    cats.append((a, b))

print(paths(1, 1))
