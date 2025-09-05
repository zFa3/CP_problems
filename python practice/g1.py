input()
sum = 0
total = 0
for i in input().split():
    if i == "-1" and sum == 0:
        total += 1
    sum = max(0, sum + int(i))
print(total)