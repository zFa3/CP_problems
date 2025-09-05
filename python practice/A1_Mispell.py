for v in range(int(input())):
    inp = input()
    for i, t in enumerate(inp):
        if t == " ":
            num = inp[:i]
            print(v+1, end = " ")
            for i, t in enumerate(inp[i+1:]):
                if int(num) - 1 == i:
                    continue
                print(t, end = "")
            print()
            break