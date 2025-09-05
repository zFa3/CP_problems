def get_heavy(string):
    temp = []
    heavy = []
    for i in string:
        if not i in temp:
            temp.append(i)
        elif not i in heavy:
            heavy.append(i)
        else:
            pass
    return heavy

def check_pattern(string, heavy):
    lst = []
    for i in string:
        lst.append(i in heavy)
    toggle = lst[0]
    for i in lst:
        toggle = not toggle
        if i == toggle:
            print("F")
            return
    print("T")
a, b = input().split()
for _ in range(int(a)):
    string = input()
    (get_heavy(string))
    (check_pattern(string, get_heavy(string)))