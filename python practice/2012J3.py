'''image = ""
for i in range(3):
    image += input()
for i in range(3):
    for h in range(3):
        for j in range(3):
            print(image[i * 3 + j] * 3, end = "")
        print()'''
image = "*x* xx* *"
x = int(input())
for i in range(3):
    for h in range(x):
        for j in range(3):
            print(image[i * 3 + j] * x, end = "")
        print()