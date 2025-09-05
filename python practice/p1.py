for _ in range(int(input())):
    number = input()
    string = input()
    a = 0
    for i in range(26):
        if string.count(chr(i + 65)) > i:
            a+=1
    print(a)