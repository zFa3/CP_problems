class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        arr = [nums[0]]
        for index, item in enumerate(nums[1:]):
            arr.append(item + arr[index])
        return arr

'''
Alternate Solution:

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        for _ in range(len(nums) - 1):
            nums[_ + 1] += nums[_]
        return nums

'''
