question = True if input() == "1" else False
N = int(input())
a = map(int, input().split())
b = map(int, input().split())
a = sorted(a)
b = sorted(b)
if question:
    tt = 0
    for index, item in enumerate(a):
        tt += max(item, b[index])
    print(tt)
else:
    tt = 0
    for index, item in enumerate(a):
        tt += max(item, b[::-1][index])
    print(tt)