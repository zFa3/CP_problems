class Solution:
    def countSymmetricIntegers(self, low: int, high: int) -> int:
        answer = 0
        for _ in range(low, high + 1):
            if len(str(_)) % 2 == 0:
                if sum(map(int, str(_)[:len(str(_))//2])) == sum(map(int, str(_)[len(str(_))//2:])):
                    answer += 1
        return answer
