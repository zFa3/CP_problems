a = [(a, b) for a in range(26) for b in range(26) if a != b]
for _ in range(int(input())):
    key = input()
    print(a.index((ord(key[0]) - 97, ord(key[1]) - 97))+1)