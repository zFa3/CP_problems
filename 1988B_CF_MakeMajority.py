def sol():
    a = int(input())
    b = input()
    if a == 1:
        return("YeS" if int(b) else "NO")
    final = []
    for i, t in enumerate(b):
        if i != len(b) - 1:
            if t == b[i + 1] and t != "1":
                continue
            else:
                final.append(t)
        else:
            final.append(t)
    if final.count('1') * 2 > len(final) or b.count('1') * 2 > a:
        return("YES")
    else:
        return("NO")
for _ in range(int(input())):
    print(sol())