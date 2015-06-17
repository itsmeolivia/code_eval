# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param {TreeNode} p
    # @param {TreeNode} q
    # @return {boolean}
    def isSameTree(self, p, q):

        if p is None and q is None:
            return True
        elif (p is None and q is not None) or (p is not None and q is None):
            return False
        elif (p.val == q.val) and (self.isSameTree(p.left,q.left)) and (self.isSameTree(p.right,q.right)):
            return True
        else:
            return False
