for n, i in enumerate(input()):
    if int(i) > 4 and not (int(i) == 9 and n == 0):
        print(9 - int(i), end = "")
    else:
        print(i, end = "")