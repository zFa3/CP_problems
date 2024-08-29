input()
arr = list(map(int, input().split()))

p1 = 0
p2 = len(arr) - 1
score = [0, 0, 0]
while p1 <= p2:
    if arr[p1] > arr[p2]:
        score[score[2]] += arr[p1]
        p1 += 1
    else:
        score[score[2]] += arr[p2]
        p2 -= 1
    score[2] = not score[2]

print(score[0], score[1])