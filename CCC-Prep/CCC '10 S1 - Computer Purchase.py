'''
5
ABC 13 22 1
DEF 10 20 30
GHI 11 2 2
JKL 20 20 20
JKM 20 20 20
'''
arr = []

for _ in range(int(input())):

    info = input().split()
    name = info[0]
    a, b, c = map(int, info[1:])
    arr.append((20000 - (2 * a + 3 * b + c), name))

arr = sorted(arr)

print(arr)
if (len(arr) > 0):
    print(arr[0][1])
if (len(arr) > 1):
    print(arr[1][1])