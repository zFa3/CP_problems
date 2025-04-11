class Solution:
    def isPalindrome(self, x: int) -> bool:
        strx = str(x)
        return strx == strx[::-1]
