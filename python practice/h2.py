for _ in range(int(input())):
    a, b = map(int, input().split())
    arr = [item == "B" for item in input()]
    counter = 0
    for i, t in enumerate(arr):
        if t:
            counter += 1
            arr[i:i+b] = [False for _ in range(b)]
    print(counter)