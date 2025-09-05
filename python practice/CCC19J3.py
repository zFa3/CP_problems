for _ in range(int(input())):
    start = 0; pr_i = ""; x = input()
    for i, t in enumerate(x):
        if i != 0:
            if t != pr_i:
                print(i - start, pr_i, end = " ")
                start = i
                pr_i = t
            if i == len(x) - 1:
                print(i - start + 1, pr_i, end = " ")
        else:
            pr_i = t
    print()