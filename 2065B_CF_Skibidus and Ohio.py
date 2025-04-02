def solve():
    string = input()
    for i in range(len(string)):
        if i:
            if string[i] == string[i - 1]:
                return 1
    return len(string)

for _ in range(int(input())):
    print(solve())
