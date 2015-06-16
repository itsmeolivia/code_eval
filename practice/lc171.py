class Solution:
    # @param {string} s
    # @return {integer}
    def titleToNumber(self, s):
        power = len(s) - 1
        column = 0
        for i in s:
            i = ord(i) - 64
            column += i * (26 ** power)
            power -= 1
        return column
