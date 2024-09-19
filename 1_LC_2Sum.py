class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numbers = nums[:]
        for i, t in enumerate(nums):
            numbers[i] = [t, i]
        numbers = sorted(numbers)
        p1 = 0
        p2 = len(numbers) - 1
        while True:
            if (numbers[p1][0] + numbers[p2][0] == target):
                return ([numbers[p1][1], numbers[p2][1]])
            if numbers[p1][0] + numbers[p2][0] < target:
                p1 += 1
            else:
                p2 -= 1