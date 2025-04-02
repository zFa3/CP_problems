import math

for _ in range(int(input())):
    x, y, k = map(int, input().split())
    print(max(math.ceil(x/k), math.ceil(y/k)) * 2 - int(math.ceil(y/k) < math.ceil(x/k)))
