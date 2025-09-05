for _ in range(int(input())):
    families, rows = map(int, input().split())
    lone = 0
    used_rows = 0
    happy = 0
    for number in list(map(int, input().split())):
        if number % 2 == 0:
            happy += number
            used_rows += number // 2
        else:
            happy += number - 1
            lone += 1
            used_rows += number // 2
    unused_rows = (rows - used_rows)
    a = lone - unused_rows
    lone -= max(0, a) * 2
    print(happy + lone)