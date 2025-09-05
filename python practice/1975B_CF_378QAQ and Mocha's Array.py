def a():
    input()
    a = set(map(int, input().split()))
    a=sorted(a)
    if len(a)<2 or a.count(1):
        print("YES");return
    b = a.pop(0)
    c = [item for item in a if item % b != 0]
    if not c:
        print("YES");return
    else:
        c = c[0]
    #b, c = a[:2]
    #print([i%b==0 or i%c==0 for i in a])
    if all([i%b==0 or i%c==0 for i in a]):
        print("YES");return
    print("NO");return
    
 
for i in range(int(input())):
    a()