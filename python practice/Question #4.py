a = input()
b = input()

a_dif = set(a).difference(set(b))
b_dif = set(b).difference(set(a))

len_diff = len(a) - len(b)

quiet_key = "-"
for i in list(a_dif):
    if a.count(str(i)) == len_diff:
        quiet_key = i
try:
    a_dif.remove(quiet_key)
except: pass
print(list(a_dif)[0], list(b_dif)[0])
print(quiet_key)