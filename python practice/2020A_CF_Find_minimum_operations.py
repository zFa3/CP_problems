for _ in range(int(input())):
    a, b = map(int, input().split())
    c = 1
    exps = []
    for _ in range(30):
        exps.append(c)
        c *= b
    answer = 0
    for i in exps[::-1]:
        if (i <= a):
            answer += int(a / i)
            a %= i
    print(answer + a)
