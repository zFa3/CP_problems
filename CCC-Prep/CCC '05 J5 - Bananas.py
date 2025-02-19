import sys
sys.setrecursionlimit(10000)
# split based off 'N'?
# if the first character is a 'B' then we search through the string
# tally the number of 'B's and 'S's
#
def solve(i: str):
    if len(i) == 0:
        return True
    if len(i) == 1:
        if i == 'A':
            return True
        else:
            return False
    if len(i) == 2:
        return False
    if i[0] == 'B':
        bs = 0
        for n, j in enumerate(i[1:]):
            if j == 'B':
                bs += 1
            elif j == 'S':
                bs -= 1
                if (bs == -1):
                    a = solve(i[1:n + 1])
                    b = ((solve(i[n + 3:]) and i[n + 2] == 'N') if n + 2 != len(i) else True)
                    return a and b
        return False
    try:
        splitter = i.index("N")
    except: return False
    return solve(i[0:splitter]) and solve(i[splitter + 1:])

while True:
    i = input()
    if i == 'X':
        break
    print("YES" if solve(i) else "NO")