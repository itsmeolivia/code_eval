class Solution:
    # @param n, an integer
    # @return an integer
    def hammingWeight(self, n):
        count = 0
        while n > 0:
            if n & 1 == 1:
                count += 1
            n /= 2
        return count
