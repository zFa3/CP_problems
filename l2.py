for _ in range(int(input())):
    str1 = input()
    str2 = input()
    p1 = 0
    yes = True
    answer = list(str1)
    for i, t in enumerate(str1):
        if t == str2[p1]:
            p1 += 1
        if t == "?":
            answer[i] = str2[p1]
            p1 += 1
        if p1 >= len(str2):
            print("YES")
            for i in answer:
                if i == "?":
                    i = "a"
                print(i, end = "")
            print()
            yes = False
            break
    if yes:
        print("NO")