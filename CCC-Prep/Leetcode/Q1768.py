class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        t1 = 0
        t2 = 0
        ans = ""
        while (t1 < len(word1) or t2 < len(word2)):
            if t1 < len(word1):
                ans += word1[t1]
                t1 += 1
            if t2 < len(word2):
                ans += word2[t2]
                t2 += 1
        return ans
