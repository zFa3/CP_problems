for _ in range(int(input())):
    input(); nothing = True
    string = input()
    reverse_string = "".join(list(string)[::-1])
    for i, t in enumerate(string):
        if ord(t) < ord(reverse_string[i]):
            print(string); nothing =  False; break
        elif ord(t) > ord(reverse_string[i]):
            print(reverse_string+string); nothing = False; break
    if nothing: print(string)
    # if ord(string[0]) <= ord(string[-1]):
    #     print(string)
    # else:
    #     # print(ord(string[0]), ord(string[-1]))
    #     print("".join(list(string)[::-1]) + string)