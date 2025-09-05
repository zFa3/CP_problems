def sol():
    riverLen, jumpDist, swimBudget = map(int, input().split())
    river = "L" + input() + "L"
    # print(river)
    i = 0
    while True:
        if i > riverLen:
            return "YES"
        if river[i] == "L":
            # if he is at a log, he would 
            # rather jump to another log than swim
            # print(river[i+1:jumpDist+i+1])
            if river[i+1:jumpDist+i+1].count("L"):
                i += abs(river[i+1:jumpDist+i+1][::-1].index("L") - len(river[i+1:jumpDist+i+1]))
            else:
                # otherwise there are no logs in reach
                # we have to jump into the water
                i += jumpDist
        elif river[i] == "W":
            # otherwise it is a water cell
            if swimBudget == 0:
                return "NO"
            swimBudget -= 1
            i += 1
        else:
            return "NO"

for _ in range(int(input())):
    print(sol())