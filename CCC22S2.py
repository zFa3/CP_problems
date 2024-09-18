constraints = {}
pairs = {}
for _ in range(int(input())):
    a = input().split()
    if a[0] in pairs:
        pairs[a[0]].append(a[1])
    else:
        pairs[a[0]] = [a[1]]
for _ in range(int(input())):
    a = input().split()
    if a[0] in constraints:
        constraints[a[0]].append(a[1])
    else:
        constraints[a[0]] = [a[1]]

counter = 0
counter2 = 0
for i in range(int(input())):
    groups = input().split()
    for j in groups:
        if j in pairs:
            for m in pairs[j]:
                if not m in groups:
                    counter += 1
        if j in constraints:
            for m in constraints[j]:
                if m in groups:
                    counter2 += 1

print(counter + counter2)