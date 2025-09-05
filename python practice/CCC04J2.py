start, stop = int(input()), int(input())
for i in range(stop + 1 - start):
    if i % 2 == 0 and i % 3 == 0 and i % 4 == 0 and i % 5 == 0:
        print(f"All positions change in year {i + start}")