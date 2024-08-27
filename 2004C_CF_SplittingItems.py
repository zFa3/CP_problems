for _ in range(int(input())):
    a, b = map(int, input().split())
    nums = sorted(list(map(int, input().split())), reverse=1)
    
    for i, t in enumerate(nums):
        if i % 2 == 1:
            max_value = min(b, nums[i - 1] - t)
            nums[i] += max_value
            b -= max_value
        if b == 0:
            break
    
    print(sum([item for index, item in enumerate(nums) if index % 2 == 0]) - sum([item for index, item in enumerate(nums) if index % 2 == 1]))