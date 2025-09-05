counter = 0
n = int(input())
arr = list(map(int, input().split()))
ct = 0
for i, t in enumerate(arr):
    if i != 0:
        if not arr[i - 1] > t:
            ct += 1
            counter = max(ct, counter)
        else: 
            ct = 0
print(counter + 1)