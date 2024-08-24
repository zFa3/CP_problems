for _ in range(int(input())):
    string = input()
    if len(string) > 2:
        yes = string[2:] == str(int(string[2:]))
        print("YES" if string[:2] == '10' and int(string[2:]) > 1 and yes else "NO")
    else:
        print("NO")