for _ in range(int(input())):
    input()
    grid = [[1 if item == "x" else 0 for item in input()], [1 if item == "x" else 0 for item in input()]]
    c = 0
    for i, t in enumerate(grid[0]):
        try:
            if sum((t, grid[0][i - 1], grid[0][i + 1])) == 0 and sum((grid[1][i - 1], grid[1][i + 1])) == 2 and i != 0 and grid[1][i] == 0:
                c += 1   
        except Exception as e: pass
    for i, t in enumerate(grid[1]):
        try:
            if sum((t, grid[1][i - 1], grid[1][i + 1])) == 0 and sum((grid[0][i - 1], grid[0][i + 1])) == 2 and i != 0 and grid[0][i] == 0:
                c += 1   
        except Exception as e: pass
    print(c)