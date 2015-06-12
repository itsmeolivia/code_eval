class Solution:
    # @param {integer[]} nums
    # @return {integer}
    def majorityElement(self, nums):

        if len(nums) <= 2:
            return nums[0]

        req = len(nums) / 2
        dict = {}
        for elt in nums:
            if elt in dict:
                dict[elt] += 1
                if dict[elt] > req:
                    return elt
            else:
                dict[elt] = 1
