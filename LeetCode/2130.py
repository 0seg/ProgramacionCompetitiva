# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        s = head
        f = head
        m = 0

        while f and f.next:
            s = s.next
            f = f.next.next

        curr = s 
        prev = None

        while curr:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp

        p1 = head
        p2 = prev

        while p2:
            m = max(p1.val+p2.val, m)

            p1 = p1.next
            p2 = p2.next

        return m 
