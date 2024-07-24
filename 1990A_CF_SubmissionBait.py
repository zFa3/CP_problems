def sol():
    input()
    a = sorted(list(input().split()))
    b = []; c = []
    for i in a:
        if i not in b:
            c.append(a.count(i))
            b.append(i)
    total_sum = 0
    for i in c[::-1]:
        total_sum += i
        if total_sum % 2 == 1:
            return ("YES")
    return ("NO")

for _ in range(int(input())):
    print(sol())