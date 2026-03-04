# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        d = ListNode(0)
        d.next = head
        c = head
        prev = d
        while c:
            if c.next and c.val == c.next.val:
                aux = c.val
                while c and c.val == aux:
                    c = c.next
                prev.next = c    
            else:
                prev = c
                c = c.next
        return d.next