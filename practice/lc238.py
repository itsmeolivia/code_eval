class Solution:
    # @param {integer[]} nums
    # @return {integer[]}
    def productExceptSelf(self, nums):
        ans = []
        product = 1

        for number in nums:
            ans.append(product)
            product *= number

        length_of_nums = len(nums)
        product = 1

        for i in xrange(len(nums)):
            ans[length_of_nums - 1 - i] = product * ans[length_of_nums - 1 - i]
            product *= nums[length_of_nums - 1 - i]

        return ans
