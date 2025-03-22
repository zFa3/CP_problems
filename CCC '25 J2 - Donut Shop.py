donuts = int(input())
for _ in range(int(input())):
    chr = input() == '+'
    donuts += (1 if chr else -1) * int(input())
print(donuts)
