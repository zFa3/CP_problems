'''
def split_(string):
    splits = 0
    lst = []
    for n, i in enumerate(string):
        lst.append(i)
        try:
            if string[n + 1] != i:
                splits += 1
        except IndexError: pass
    return splits
'''
def split_(string):
    toggle = False
    splits = 1
    for n, i in enumerate(string):
        try:
            if i == "1" and string[n + 1] == "0":
                splits += 1
            elif i == "0" and string[n + 1] == "1" and not toggle:
                toggle = True
            elif i == "0" and string[n + 1] == "1" and toggle:
                splits += 1
        except IndexError: pass
    return splits

for i in range(int(input())):
    binary = input()
    print(split_(binary) if split_(binary) != 0 else 1)
    

# 101010

# 1 | 01 | 0 | 1 | 0
# 1 | 01 | 01 | 0