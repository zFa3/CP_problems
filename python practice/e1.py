for i in range(int(input())):
    print ("Alice" if sum(map(int, input().split())) % 2 == 1 else "Bob")