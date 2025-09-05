i, c, s = input(), [0] * 5, []
while True:
    if i[c[0]].isnumeric():
        if not c[0] + 2 > len(i):
            if i[c[0] + 1].isalpha():
                c[1] = 0
                while True:
                    if i[c[0] - c[1]] in ["+", "-"]:
                        s.append((c[0] - c[1], c[0])); break
                    c[1] += 1
        else:
            c[1] = 0
            while True:
                if i[c[0] - c[1]] in ["+", "-"]:
                    s.append((c[0] - c[1], c[0])); break
                c[1] += 1
    c[0] += 1
    if c[0] == len(i): break


for j in s:
    print(i[c[2]:j[0]], end = "")
    print(f" tighten {i[j[0] + 1:j[1] + 1]}" if i[j[0]] == "+" else f" loosen {i[j[0] + 1:j[1] + 1]}")
    c[2] = j[1] + 1
