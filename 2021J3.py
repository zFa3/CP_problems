direction = ""
while True:
    inp = input()
    if inp == "99999":
        break
    if sum(map(int, inp[:2]))%2==0 and (inp[:2]) != "00":
        direction = "right"
    elif sum(map(int, inp[:2]))%2==1:
        direction = "left"
    print(direction, inp[2:])