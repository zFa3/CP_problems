import math
for _ in range(int(input())):
    cars, max_sales = map(int, input().split())
    num_cars = list(map(int, input().split()))
    print(max(math.ceil(sum(num_cars) / max_sales), max(num_cars)))