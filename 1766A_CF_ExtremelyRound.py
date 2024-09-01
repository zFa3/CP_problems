list = [0 for _ in range(1000000)]
counter = 0
for i in range(1, 1000001):
    list[i - 1] = counter
    if str(i).count('0') == len(str(i)) - 1:
        counter += 1

for _ in range(int(input())):
    x = int(input())
    print(list[x])