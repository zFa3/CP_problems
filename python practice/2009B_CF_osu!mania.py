for _ in range(int(input())):
    answer = []
    for i in range(int(input())):
        row = input()
        answer.append(row.index('#') + 1)
        # print(row.index('#') + 1)
    for j in answer[::-1]:
        print(j, end = " ")
    print()