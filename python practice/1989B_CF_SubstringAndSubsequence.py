'''
ID: zFa3
TASK: Substring and Subsequence
LANG: Python 3
'''

def lcs(a, b):
    maximum = 0, None
    for i in range(len(b)):
        g = same_Chars(a, b[i:])
        if maximum[0] < g:
            maximum = g, i
    return maximum

def is_subsq(a, b):
    counter = total = 0
    for i in b:
        while True:
            if counter == len(a):
                break
            if i == a[counter]:
                total += 1
                break
            counter += 1
    if total == len(b):
        return True
    return False

def same_Chars(a, b):
    counter = total = 0
    for i in b:
        while True:
            if counter == len(a):
                return total
            if a[counter] == i:
                total += 1
                counter += 1
                break
            counter += 1
    return total

for _ in range(int(input())):
    #print(lcs(input(), input()))
    a, b = input(), input()
    ans = lcs(a, b)
    if (ans[1]) == None:
        pass
    else:
        b = b[:ans[1]]+b[ans[1]+ans[0]:]
    #print("\t\t\t", ans)
    #print("\t\t\t", b)
    print(len(a+b))