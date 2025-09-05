for _ in range(int(input())):
    y = int(input())
    a = b = 0
    arr = list(zip(map(int, input().split()), map(int, input().split())))
    for i in [item for item in arr if item[0] != item[1]]:
        if i[0] > i[1]:
            a+=i[0]
        else:
            b+=i[1]
    #print("\t\t\t", a, b, [item for item in arr if item[0] != item[1]])
    for i in [item for item in arr if item[0] == item[1]]:
        if i[0] == -1:
            if a > b:
                a-=1
            else:
                b-=1
        elif i[0] == 1:
            if a > b:
                b+=1
            else:
                a+=1
    print(min(a, b))