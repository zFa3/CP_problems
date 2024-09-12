a, b = map(int, input().split())
matrix = []
inputs = []

for i in range(a):
    inputs.append(input())

for i in range(b):
    matrix.append([item[i] for item in inputs])

greatest_drop = 0
greatest_rise = 0
for e, i in enumerate(matrix[1:]):
    greatest_rise = max(greatest_rise, i.count("*") - matrix[e].count("*"))
    greatest_drop = max(greatest_drop, matrix[e].count("*") - i.count("*"))

print(greatest_rise, greatest_drop)