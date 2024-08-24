for _ in range(int(input())):
    x, y, k = map(int, input().split())
    points = []
    if k % 2:
        points.append((x, y))
    for m in range(1, k//2 + 1):
        points.append((x, y - m))
        points.append((x, y + m))
        
    for point in points:
        print(f"{point[0]} {point[1]}")