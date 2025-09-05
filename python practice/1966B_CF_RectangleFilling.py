for _ in range(int(input())):
    r, c = map(int, input().split())
    color_map = ""
    for _ in range(r):
        color_map += input()
    # there needs to be color on the 
    # top, bottom, left and right sides 
    # to fully color a grid
    top = [1 if color_map[i] == 'W' else 0 for i in range(c)]
    bottom = [1 if color_map[i] == 'W' else 0 for i in range(c*(r-1), c*r)]
    left = [1 if color_map[i] == 'W' else 0 for i in range(r*c) if i%c==0]
    right = [1 if color_map[i] == 'W' else 0 for i in range(r*c) if i%c==c-1]
    #print(top, bottom, left, right)
    if any(top) and any(bottom) and any(left) and any(right):
        print("YES"); continue
    if not all(top) and not all(bottom) and not all(left) and not all(right):
        print("YES"); continue
    print("NO")