'''a, b = input(), input()

cyclics = []
j = list(b)
for _ in b:
    j.insert(0, j.pop())
    cyclics.append("".join(j))

if any([i in a for i in cyclics]):
    print("yes")
else:
    print("no")


'''

# optimize
def main():
    a, j = input(), input()
    for i in j:
        if j[-1] + j[0:-1] in a:
            print("yes")
            return
        j = j[-1] + j[0:-1]
    print("no")
main()