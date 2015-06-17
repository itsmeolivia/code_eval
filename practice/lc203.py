# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} head
    # @param {integer} val
    # @return {ListNode}
    def removeElements(self, head, val):

        while head and head.val==val:
            head = head.next

        if head is None:
            return head

        tmp = head.next
        prev = head

        while tmp is not None:
            if tmp.val == val:
                prev.next = tmp.next
            else:
                prev = tmp
            tmp = tmp.next
        return head
