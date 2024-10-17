def paths(row, col):
    # print(row, col)
    if (row, col) in memo:
        return memo[(row, col)]
    if row == rows and col == cols:
        memo[(row, col)] = 1
        return 1
    if (row, col) in cats:
        memo[(row, col)] = 0
        return 0
    total = 0
    if row != rows:
        total += paths(row + (not row == rows), col)
    if col != cols:
        total += paths(row, col + (not col == cols))
    memo[(row, col)] = total
    return total

rows, cols = map(int, input().split())
cats = []
memo = {}

for _ in range(int(input())):
    a, b = map(int, input().split())
    cats.append((a, b))

print(paths(1, 1))
