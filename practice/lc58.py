class Solution:
    # @param {string} s
    # @return {integer}
    def lengthOfLastWord(self, s):

        if s == "" or len(s.strip()) == 0:
            return 0
        s = s.split()
        return len(s[-1])
