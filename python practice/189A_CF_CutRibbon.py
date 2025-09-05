 a, b, c, d = map(int, input().split())
 maximum = 1
 for i in range(a//b + 1):
     for j in range(a//c + 1):
         if (a - (i * b + j * c)) % d == 0 and i * b + j * c <= a:
             maximum = max(maximum, i + j + (a - i * b - j * c) // d)
 print(maximum)
