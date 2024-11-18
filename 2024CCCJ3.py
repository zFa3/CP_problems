scores = []
for _ in range(int(input())):
    scores.append(int(input()))

scores = sorted(scores, reverse=True)
third = sorted(set(scores), reverse=True)[2]
print(third, scores.count(third))
