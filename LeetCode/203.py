class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        d = ListNode()
        d.next = head 

        temp = d

        while temp and temp.next:
            if temp.next.val == val:
                temp.next = temp.next.next
            else:
                temp = temp.next

        return d.next