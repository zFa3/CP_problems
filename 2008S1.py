min = [0, 1e9]
while True:
    x = input().split()
    if int(x[1]) < int(min[1]):
        min = x
    if x[0] == "Waterloo":
        break

print(min[0])