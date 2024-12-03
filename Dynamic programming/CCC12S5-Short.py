def paths(row, col):
    total = 0
    if (row, col) in memo: return memo[(row, col)]
    elif row == rows and col == cols: return 1
    if (row, col) in cats: return 0
    if row != rows: total += paths(row + 1, col)
    if col != cols: total += paths(row, col + 1)
    memo[(row, col)] = total; return total
rows, cols = map(int, input().split()); cats = []; memo = {}
for _ in range(int(input())): a, b = map(int, input().split()); cats.append((a, b))
print(paths(1, 1))