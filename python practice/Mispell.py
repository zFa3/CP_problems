for num in range(int(input())):
    index, item = input().split()
    if index == 0:
        print(item)
    print(num + 1, "".join(list(item)[:int(index) - 1] + list(item)[int(index):]))