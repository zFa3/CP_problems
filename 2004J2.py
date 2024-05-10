def shift(note, shift_char):
    shift_amount = ord(shift_char) - 65
    new_note = []
    for i in note:
        a = (ord(i) + shift_amount)
        if a > 90:
            a = 65 + (a % 91)
        new_note.append(chr(a))
    return new_note

def remove_nonalpha(note):
    a = ""
    for i in note:
        if ord(i) in [i for i in range(65, 91)] + [i for i in range(97, 123)]:
            a += i
    return a

def table(key, content):
    table = {}
    for i, _ in enumerate(key):
        table[i] = []
    for i, t in enumerate(content):
        table[i % len(key)].append(t)
    return table


keyword = input()
note = remove_nonalpha(input())
x = table(keyword, note)
a = {}
for i, t in x.items():
    for j in t:
        try:
            a[i] += (shift(keyword[i], j))
        except:
            a[i] = (shift(keyword[i], j))
ans = ""
while a:
    try:
        for i in range(len(a)):
            ans += (a[i].pop(0))
    except:
        break
print(ans)