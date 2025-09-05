def sol():
    input()
    string = input()
    a, b = string.count('0'), string.count('1')
    instructions = input()
    for i in instructions:
        if a == 0 or b == 0:
            return False
        if i == '0':
            b -= 1
        else:
            a -= 1
    return True


for _ in range(int(input())):
    print("YES" if sol() else "NO")
