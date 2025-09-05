def check(array):
    sums = []
    sums.append(sum([item for item in array[0]]))
    sums.append(sum([item for item in array[1]]))
    sums.append(sum([item for item in array[2]]))
    sums.append(sum([item for item in array[3]]))
    
    sums.append(sum([item[0] for item in array]))
    sums.append(sum([item[1] for item in array]))
    sums.append(sum([item[2] for item in array]))
    sums.append(sum([item[3] for item in array]))
    return all(map(lambda x : x == sums[0], sums))

array = []
for _ in range(4):
    array.append(list(map(int, input().split())))
print("magic" if check(array) else "not magic")