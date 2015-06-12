class Solution:
    # @param {string} s
    # @param {string} t
    # @return {boolean}
    def isIsomorphic(self, s, t):
        dictS = {}
        dictT = {}
        if s == t:
            return True

        for index, item in enumerate(s):
            if item in dictS:
                if t[index] != dictS[item]:
                    return False
            else:
                dictS[item] = t[index]

            if t[index] in dictT:
                if item != dictT[t[index]]:
                    return False
            else:
                dictT[t[index]] = item
        return True
