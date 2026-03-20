class Solution:
    def romanToInt(self, s: str) -> int:
        intNum = 0
        dic = {"I": 1, "V": 5, "X": 10, "L":50, "C":100, "D":500, "M":1000}

        for e in range(len(s)-1):
            if dic[s[e]] < dic[s[e+1]]:
                intNum -= dic[s[e]]
            else:
                intNum += dic[s[e]]

        return intNum + dic[s[-1]]