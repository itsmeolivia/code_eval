# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param {TreeNode} root
    # @return {boolean}

    def depth(self, root):
        if root is None:
            return 0
        return 1 + max(self.depth(root.left), self.depth(root.right))

    def isBalanced(self, root):

        if not root:
            return True

        right = self.depth(root.right)
        left = self.depth(root.left)

        if (right - left) not in [-1, 0, 1]:
            return False

        if not self.isBalanced(root.right) or not self.isBalanced(root.left):
            return False

        return True
        
