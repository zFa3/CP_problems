ans = []
N = int(input())
for i in range(N):
    ans.append(input())

correct = 0
for i in range(N):
    if input() == ans[i]:
        correct += 1

print(correct)