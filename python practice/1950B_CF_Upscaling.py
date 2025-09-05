for _ in range(int(input())):
    n = int(input())
    arr = [i % 2 for i in range(n)]
    for i in arr:
        for _ in range(2):
            for j in range(n):
                print("##" if (not i if j % 2 == 0 else i) else "..", end = "")
            print()