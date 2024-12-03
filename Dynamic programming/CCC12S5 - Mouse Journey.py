import sys
import time as tm
sys.setrecursionlimit(20000)
# mouse journey
memoization = 1
rows, cols = map(int, input().split())
cats = []
memo = {}  # this is where we store our previous results

for _ in range(int(input())):
    a, b = map(int, input().split())
    cats.append((a, b))

arr = [[0 for _ in range(rows)] for _ in range(cols)]

def paths(row, col):
    arr[row - 1][col - 1] += 1
    if memoization:
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

    # if we are not at the bottom, we can continue going down
    if row != rows:
        total += paths(row + 1, col)

    # if we are not at the right edge, we can continue going right
    if col != cols:
        total += paths(row, col + 1)

    memo[(row, col)] = total
    return total

time1 = tm.perf_counter()
print(paths(1, 1))
print(f"{tm.perf_counter() - time1:0.5f} seconds", end = "\n\n")

def formatt(string):
    for i, t in enumerate(string):
        if  t == '0':
            string = string[:i] + " " + string[i+1:]
        else:
            return string

def printCallTable():
    for i in arr:
        for j in i:
            l = str(j).zfill(10)
            l = formatt(l)
            print(l, end = " ")
        print()
    
printCallTable()
