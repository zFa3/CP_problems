'''
ID: zFa3
TASK: Olesya and Rodion
LANG: Python 3
'''
n, t = map(int, input().split())
if (n == 1 and t == 10):
    print(-1)
elif (t != 10):
    print(str(t)+"0"*(n-1))
else:
    print(str(t)+"0"*(n-2))