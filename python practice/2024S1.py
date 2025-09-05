N = int(input())
a = []
for _ in range(N):
    a.append(int(input()))
total = 0
for i in range(N//2):
    if a[i] == a[i + N//2]:
        total += 2

print(total)