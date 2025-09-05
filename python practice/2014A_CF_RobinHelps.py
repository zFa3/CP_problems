for _ in range(int(input())):
    a, b = map(int, input().split())
    gold = 0; counter = 0
    people = list(map(int, input().split()))
    for i in people:
        if i >= b:
            gold += i
        elif gold and i == 0:
            gold -= 1
            counter += 1
    print(counter)