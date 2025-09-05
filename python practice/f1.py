for _ in range(int(input())):
    input()
    a = len(set([n for n in range(10)]).difference(set(map(int, input().split()))))
    print(3 * a * (a - 1))