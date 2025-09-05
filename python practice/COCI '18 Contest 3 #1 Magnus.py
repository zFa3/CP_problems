string = "HONI"
it = 0
total = 0
for i in input():
    if i == string[it]:
        it += 1
        if it == 4:
            total += 1
            it = 0
print(total)