class Solution:
    # @param {integer[]} nums
    # @param {integer} k
    # @return {boolean}
    def containsNearbyDuplicate(self, nums, k):

        if len(nums) < 2:
            return False

        data = {}

        for i in xrange(len(nums)):
            if nums[i] not in data:
                data[nums[i]] = i
            else:
                if i - data[nums[i]] <= k:
                    return True
                else:
                    data[nums[i]] = i
        return False
