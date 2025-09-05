'''a, b = int(input()), int(input())
arr = [False for _ in range(a*b)]
for _ in range(int(input())):
    inp = input().split()
    if inp[0] == "R":
        arr[(int(inp[1])-1)*b:(int(inp[1]))*b] = [not item for item in arr[(int(inp[1])-1)*b:(int(inp[1]))*b]]
    else:
        for i in [i for i in range(a*b) if i % b == int(inp[1]) - 1]:
            arr[i] = not arr[i]#[not i for i in range(a*b) if i % b == int(inp[1]) - 1]
        """for i in range(a*b):
            if i % b == int(inp[1]) - 1:
                arr[i] = not arr[i]"""
print(arr.count(True))'''


'''
row, col = int(input()), int(input())
lines = [0, 0]
inputs = []
for i in range(int(input())):
    x = input()
    if not x in inputs:
        if x[0] == "R":
            l1 += 1
        else:
            l2 += 1
        inputs.append(x)
    else:
        if x[0] == "R":
            l1 -= 1
        else:
            l2 -= 1

print(l1 * col + l2*row - l1 * l2 * 2)
'''

row, col = int(input()), int(input())
l1 = l2 = 0
inputs = set()
for i in range(int(input())):
    x = input()
    if not x in inputs:
        inputs.add(x)
        if x[0] == "R":
            l1 += 1
        else:
            l2 += 1
    else:
        inputs.remove(x)
        if x[0] == "R":
            l1 -= 1
        else:
            l2 -= 1

print(l1 * col + l2 * row - l1 * l2 * 2)
