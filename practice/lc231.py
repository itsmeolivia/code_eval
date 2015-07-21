class Solution:
    # @param {integer} n
    # @return {boolean}
    def isPowerOfTwo(self, n):
        ones = 0
        while n > 0:
            if n&1 == 1:
                ones += 1
            if ones > 1:
                return False
            n/=2
        if ones == 1:
            return True
        return False
