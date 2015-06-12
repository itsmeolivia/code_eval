class Solution:
    # @param {integer[]} nums
    # @return {boolean}
    def containsDuplicate(self, nums):
        dict = {}
        for i in nums:
            if i in dict:
                return True
            else:
                dict[i] = True
        return False
