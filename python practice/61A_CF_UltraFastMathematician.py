a = input()
b = input()
c = ['1' if a[index] != item else '0' for index, item in enumerate(b)]
print("".join(c))