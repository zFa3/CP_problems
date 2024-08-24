for n in range(int(input())):
    input()
    seq = input()
    ans = list(seq)
    parity = 1
    ans[0] = "("
    for m, b in enumerate(seq):
        if m:
            if b == "(":
                parity += 1
            elif b == ")": 
                parity -= 1
            else: 
                if parity > 0:
                    parity -= 1
                    ans[m] = ")"
                else: 
                    parity += 1
                    ans[m] = "("
    # print(ans)
    cost = 0
    stack = []
    for i, t in enumerate(ans):
        if t == "(":
            stack.append(i)
        else: 
            cost += i - stack.pop()
    print(cost)