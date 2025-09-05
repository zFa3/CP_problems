for _ in range(int(input())):
     n, k = map(int, input().split())
     for i in range(k):
         print(i + 1, end = " ")
     for i in range(n - k):
         print(n - i, end = " ")