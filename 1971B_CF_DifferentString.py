for i in range(int(input())):
    string = list(input()); x = list(set(string))
    if len(x) < 2:
        print("NO")
    else:
        print("YES")
        a, b = string.index(x[0]), string.index(x[1])
        c = string[a]
        string[a] = string[b]
        string[b] = c
        print("".join(string))