# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} head
    # @return {ListNode}
    def reverseList(self, head):
        prev = None

        if head is None or head.next is None:
            return head
        tmp = head

        while tmp is not None:
            next = tmp.next
            tmp.next = prev
            prev = tmp
            tmp = next
        return prev
