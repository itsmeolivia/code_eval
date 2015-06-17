from itertools import izip_longest
class Solution:
    # @param {string} version1
    # @param {string} version2
    # @return {integer}
    def compareVersion(self, version1, version2):
        v1 = (int(n) for n in version1.split('.'))
        v2 = (int(n) for n in version2.split('.'))
        for n1, n2 in izip_longest(v1, v2, fillvalue=0):
            if n1> n2:
                return 1
            elif n1< n2:
                return -1
        return 0
