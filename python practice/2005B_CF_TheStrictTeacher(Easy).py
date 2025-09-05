def cp(x, i):
    if x == i:
        return -1e9
    if x < i:
       return max(0, i - x)
    return max(0, x - i)

for _ in range(int(input())):
    n, m, k = map(int, input().split())
    teachers = list(map(int, input().split()))
    student_locs = list(map(int, input().split()))
    for i in student_locs:
        if i < min(teachers):
            print(min(teachers) - 1)
        elif i > max(teachers):
            print(n - max(teachers))
        else:
            print(max(0, sum(list(map(lambda x : cp(x, i), teachers))[:2])//2))
