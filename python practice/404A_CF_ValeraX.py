pattern = int(input())
string = ""
for i in range(pattern):
    string += input()
x = []
for i in range(pattern):
    x.append((pattern + 1) * i)
    x.append((pattern - 1) * (i + 1))
x = set(x)
a = set([i for i in range(pattern ** 2)]).difference(x)
if string[0] != string[1] and all([string[item] == string[0] for item in x]) and all([string[item] == string[1] for item in a]):
    print("YES")
else:
    print("NO")