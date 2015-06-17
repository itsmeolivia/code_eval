class Solution:
    # @param {integer} x
    # @return {integer}
    def mySqrt(self, x):

        floor = 0
        ceiling = x
        if x == 1 or x == 0:
            return x


        while 1:
            candidate = int(ceiling - (ceiling - floor)/2)
            test = candidate * candidate
            if test > x:
                ceiling = candidate
            elif test == x:
                return candidate
            else:
                if test + 2 * (candidate) + 1 > x:
                    return candidate
                else:
                    floor = candidate
