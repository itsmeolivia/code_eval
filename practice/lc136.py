class Solution:
    # @param {integer[]} nums
    # @return {integer}
    def singleNumber(self, nums):
        a = set(nums)
        a = sum(a)*2
        singleNumber = a - sum(nums)
        return singleNumber
