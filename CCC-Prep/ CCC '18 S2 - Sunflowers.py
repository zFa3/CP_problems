def all_smaller(a, b):
    # returns true if all the elements in b are
    # stricly greater than the corresponding element in a
    return all(map(lambda x:x[0] < x[1], zip(a, b)))

def smallToLarge(vector):
    newVec = []
    for i in vector:
        newVec.append(i[0])
    return newVec == sorted(newVec)

def is_valid(vector):
    first_vector = [item[0] for item in vector]
    smaller = [list(first_vector[i] > item for i in range(len(first_vector))) for _, item in enumerate(first_vector)]
    for i, _ in enumerate(vector):
        first_vector = [item[i] for item in vector]
        temp_smaller = [list(first_vector[i] > item for i in range(len(first_vector))) for _, item in enumerate(first_vector)]
        if temp_smaller != smaller:
            return False
    return all(map(lambda x : all_smaller([-1e9] + x[:-1], x), vector)) and smallToLarge(vector)

def rotate_clockwise(array):
    return [[item[i] for item in array[::-1]] for i in range(len(array))]

def print_array(array):
    for i in array:
        for n, j in enumerate(i):
            print(j, end = " " if n != len(i) - 1 else "")
        print()

side_len = int(input())

array = []
for _ in range(side_len):
    array.append(list(map(int, input().split())))

while True:
    if is_valid(array):
        print_array(array)
        break
    array = rotate_clockwise(array)