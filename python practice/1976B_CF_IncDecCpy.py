for _ in range(int(input())):
    input()
    try:
        a, b = list(map(int, input().split())), list(map(int, input().split()))
    except:
        a, b = list(int(input())), map(int, input().split())
    min_dst = 1e9; tt = 1
    for i in zip(a, b):
        tt += abs(i[0]-i[1])
        if b[-1] not in range(min(i[0], i[1]), max(i[0], i[1])+1):
            min_dst = min(min_dst, min(abs(b[-1]-i[0]), abs(b[-1]-i[1])))
        else:
            min_dst = 0
    print(tt+min_dst)
