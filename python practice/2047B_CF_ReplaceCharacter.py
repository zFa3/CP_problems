for _ in range(int(input())):
    length = int(input())
    string = input()
    occurances = {}
    for i in string:
        if i in occurances.keys():
            occurances[i] += 1
        else:
            occurances[i] = 1
    maximum = [0, ""]
    minimum = [1e9, ""]
    for i in occurances.keys():
        if occurances[i] < minimum[0]:
            minimum = occurances[i], i
        if occurances[i] > maximum[0]:
            maximum = occurances[i], i
    printed = False
    if maximum[0] != minimum[0]:
        for i in string:
            if i == minimum[1] and not printed:
                print(maximum[1], end = "")
                printed = True
            else:
                print(i, end = "")
    else: 
        for i in string:
            if i != maximum[1] and not printed:
                print(maximum[1], end = "")
                printed = True
            else:
                print(i, end = "")

    print()