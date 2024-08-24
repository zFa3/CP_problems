# 4
# 6
# 3 5 1 4 3 2
# LRLLLR
# 2
# 2 8
# LR
# 2
# 3 9
# RL
# 5
# 1 2 3 4 5
# LRLRR

for _ in range(int(input())):
    length = int(input())
    arr = list(map(int, input().split()))
    ptrs = input()
    # two pointers
    # optimal solution is to have the most overlap between choosing left and right
    l = 0
    r = len(arr) - 1
    total = 0
    curr_sum = 0
    prefix_sums = [0]
    # pre-calculate the sums from arr[0] to arr[n], to save time later
    # prefix sums ^
    for i in arr:
        curr_sum += i
        prefix_sums.append(curr_sum)
    while l < r:
        if ptrs[l] == "L" and ptrs[r] == "R":
            #total += sum(arr[l:r + 1])
            total += prefix_sums[r + 1] - prefix_sums[l]
            l += 1; r -= 1
        else:
            # while l < r and ptrs[l] != "L":
            
            # ^ while loops from editorial were virtually identical to my if/else
            if ptrs[l] != "L":
                l += 1
            #while l < r and ptrs[r] != "R":
            if ptrs[r] != "R":
                r -= 1
    print(total)