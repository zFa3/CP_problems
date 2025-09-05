def move_down(lst: list):
    for n, i in enumerate(lst):
        for e, j in enumerate(i):
            if j == "o" and n != len(lst) - 1:
                if lst[n+1][e] == ".":
                    lst[n+1][e] = "o"
                    lst[n][e] = "."
    return lst

x, y = map(int, input().split())
arr = []
for _ in range(x):
    arr.append(list(input()))
for _ in range(100):
    arr = move_down(arr)
for i in arr:
    print("".join(i))