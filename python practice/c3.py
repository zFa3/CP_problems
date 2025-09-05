for i in range(int(input()) + 1, 10000):
    if len(set(str(i))) == 4:
        print(i)
        break