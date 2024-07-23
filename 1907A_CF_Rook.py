for _ in range(int(input())):
    string = input()
    for i in range(8):
        if i + 1 != int(string[1]):
            print(string[0] + str(i + 1))
    for i in range(8):
        if chr(i + 97) != string[0]:
            print(chr(i + 97) + string[1])
