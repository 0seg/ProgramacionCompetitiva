class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        pos = 0
        if s == '': return True

        for a in range(len(t)):
            if t[a] == s[pos]:
                pos+= 1
                if pos  == len(s):
                    return True
        return False

