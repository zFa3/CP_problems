for i in range(int(input())):
    input()
    arr = list(map(int, input().split()))
    print(min(((min(arr.index(min(arr)) + 1, len(arr) - arr.index(min(arr))) + min(abs(arr.index(max(arr)) - arr.index(min(arr))), arr.index(max(arr)) + 1, len(arr) - arr.index(max(arr))))), (min(arr.index(max(arr)) + 1, len(arr) - arr.index(max(arr))) + min(abs(arr.index(min(arr)) - arr.index(max(arr))), arr.index(min(arr)) + 1, len(arr) - arr.index(min(arr))))))