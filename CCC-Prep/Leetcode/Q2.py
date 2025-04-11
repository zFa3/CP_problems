# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1 = 0
        num2 = 0
        i = j = 0
        while l1 != None:
            num1 += l1.val * 10 ** i
            i += 1
            l1 = l1.next
        while l2 != None:
            num2 += l2.val * 10 ** j
            j += 1
            l2 = l2.next

        previous = None
        for i, t in enumerate(str(num1 + num2)):
            answer = ListNode(int(t), previous)
            previous = answer
        return answer
