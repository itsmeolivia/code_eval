# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @return a boolean
    def hasCycle(self, head):
        ptr_fast = head
        ptr_slow = head

        if head is None:
            return False

        while ptr_fast is not None and ptr_fast.next is not None:
            ptr_slow = ptr_slow.next
            ptr_fast = ptr_fast.next.next

            if ptr_fast is None:
                return False
            if ptr_fast == ptr_slow:
                return True
        return False
