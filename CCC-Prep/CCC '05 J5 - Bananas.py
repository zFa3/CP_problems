def solve(i: str):
    if len(i) == 0: return True
    if len(i) == 1: return i == 'A'
    if len(i) == 2: return False
    if i[0] == 'B':
        bs = 0
        for n, j in enumerate(i[1:]):
            if j == 'B': bs += 1
            elif j == 'S':
                bs -= 1
                if (bs == -1):
                    return solve(i[1:n + 1]) and ((solve(i[n + 3:]) and i[n + 2] == 'N') if n + 2 != len(i) else True)
        return False
    try: splitter = i.index("N")
    except: return False
    return solve(i[0:splitter]) and solve(i[splitter + 1:])

while True:
    i = input()
    if i == 'X': break
    print("YES" if solve(i) else "NO")
