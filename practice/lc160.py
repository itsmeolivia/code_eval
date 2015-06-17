# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param two ListNodes
    # @return the intersected ListNode
    def getIntersectionNode(self, headA, headB):
        dict = {}

        if not headA or not headB :
            return None
        ptA, ptB, jumpA = headA, headB, False
        while True:
            if id(ptA) == id(ptB):
                return ptA
            ptA, ptB = ptA.next, ptB.next
            if not ptA:
                if not jumpA:
                    jumpA = True
                    ptA = headB
                else:
                    return None
            if not ptB:
                ptB = headA
