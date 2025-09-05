input()
arr = [item % 2 for item in map(int, input().split())]
print(arr.index(1) + 1 if sum(arr) == 1 else arr.index(0) + 1)