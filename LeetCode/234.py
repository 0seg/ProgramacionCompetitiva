# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        if fast is not None:
            slow = slow.next

        current = slow
        prev = None
        while current:
            nextN = current.next
            current.next = prev
            prev = current
            current = nextN
        
        while prev:
            if prev.val != head.val:
                return False
            prev = prev.next
            head = head.next
            
        return True