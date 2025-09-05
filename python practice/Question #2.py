size = int(input())
while True:
    Yobi_size = int(input())
    if Yobi_size < size:
        size += Yobi_size
    else:
        break
print(size)