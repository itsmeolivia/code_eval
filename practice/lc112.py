# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param {TreeNode} root
    # @param {integer} sum
    # @return {boolean}
    def hasPathSum(self, root, sum):

        if not root:
            return False
        cur_sum = sum - root.val
        if cur_sum == 0 and self.childless(root):
            return True
        else:
            return self.hasPathSum(root.left, cur_sum) or self.hasPathSum(root.right, cur_sum)

    def childless(self, root):
        return not root.left and not root.right
