n, m = int(input()), int(input())
adj = []
for _ in range(n):
    adj.append(input())

noun = []
for _ in range(m):
    noun.append(input())

for j in adj:
    for n in noun:
        print(f"{j} as {n}")