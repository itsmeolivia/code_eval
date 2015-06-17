import math

class Solution:
    # @param {integer} m
    # @param {integer} n
    # @return {integer}
    def rangeBitwiseAnd(self, m, n):

        if m == 0 or n == 0:
            return 0

        elif m == n:
            return m

        else:
            bitM = int(math.log(m, 2) + 1)
            bitN = int(math.log(n, 2) + 1)

            if bitM != bitN:
                return 0

            mini = min(m, n)
            maxi = max(m, n)

            val = mini
            for i in xrange(mini, maxi + 1):
                val &= i
            return val
