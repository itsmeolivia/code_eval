# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param {integer[]} nums
    # @return {TreeNode}


    def sortedArrayToBST(self, nums):
        if not nums:
            return None
        else:
            return self.recurseBST(0, len(nums), nums)

    def recurseBST(self, beg, end, nums):

        if end - beg == 0:
            return None
        if end - beg == 1:
            return TreeNode(nums[beg:end][0])

        mid = (end + beg - 1) >> 1

        root = TreeNode(nums[mid])

        root.left = self.recurseBST(beg, mid, nums)
        root.right = self.recurseBST(mid + 1, end, nums)

        return root
