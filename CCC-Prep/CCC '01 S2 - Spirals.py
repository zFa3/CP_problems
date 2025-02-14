start_number, end_number = int(input()), int(input())
numbers = [i for i in range(start_number, end_number + 1)]
grid_size = 21
grid = [[-1 for _ in range(grid_size)] for _ in range(grid_size)]
directions = [(1, 0), (0, 1), (-1, 0), (0, -1)]

def assign_grid():
    global grid
    spot = [grid_size//2, grid_size//2]
    steps = 0.5; direction = 0; counter = 0
    while True:
        for _ in range(int(steps) + ((steps - int(steps)) >= 0.5)):
            if (counter >= len(numbers)):
                return
            grid[spot[0]][spot[1]] = numbers[counter]
            counter += 1
            spot[0] += directions[direction][0]
            spot[1] += directions[direction][1]
        steps += 0.5
        direction += 1
        direction %= 4
assign_grid()
for i in grid:
    for j in i:
        print(j if j != -1 else "", end = " ")
    print()
