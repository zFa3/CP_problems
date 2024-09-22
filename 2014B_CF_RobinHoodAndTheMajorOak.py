import math
def cnt (a, b):
    if a % 2 == 0:
        if b // 2 % 2 == 0:
            return True
    else:
        if math.ceil(b / 2) % 2 == 0:
            return True
    return False
for _ in range(int(input())):
    a, b = map(int, input().split())
    print("YES" if cnt(a, b) else "NO")

"""
def cnt(a, b):
    b = a - b + 1
    if b != 1:
        if a % 2:
            return True
        return False
    if a % 2:
        return False
    return True
    
    if (a - b + 1 % 2) + (a % 2) == 2 and b != 1:
        return True
    return False
    


for _ in range(int(input())):
    a, b = map(int, input().split())
    print("YES" if cnt(a, b) else "NO")
#    print("YES" if sum([(item) for item in range(a - b + 1, a + 1)]) % 2 == 0 else "NO")


'''

5
1 1
2 1
2 2
3 2
4 4

'''

import math

def a

def cnt(a, b):
    b -= 1
    if a % 2 == 0:
        if math.ceil(b / 2) % 2 == 0:
            return False
    else:
        if math.ceil(b / 2) % 2 == 1:
            return False
    return True
        
    if a % 2 == 1 and math.ceil(b / 2) % 2 == 0:
        return True
    elif a % 2 == 0 and math.ceil(b / 2) % 2 == 1:
        return True
    return False
'''
5
1 1
2 1
2 2
3 2
4 4
'''

for _ in range(int(input())):
    a, b = map(int, input().split())
    r = (a + 1) % 2
    x = (a - b + 1) % 2
    print("YES" if cnt(a, b) else "NO")
    #print()
    #print((a + 1) - (a - b + 1), a + 1)
    #print("YES" if sum([(item) for item in range(a - b + 1, a + 1)]) % 2 == 0 else "NO")
"""