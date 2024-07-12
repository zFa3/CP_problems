import math
n, k = map(int, input().split())
if k > math.ceil(n/2):
    print((k-math.ceil(n/2)) * 2)
else:
    print(k * 2 -1)