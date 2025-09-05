a, b = map(int, input().split())
for _ in range(a):
    instruction = input().split()
    if instruction[0][0] == "D":
        b -= int(instruction[1])
    else:
        b += int(instruction[1])
    b = min(max(b, 1), 1024)
    print(b)
'''
3 100
DEC 50
DEC 50
INC 2000
'''