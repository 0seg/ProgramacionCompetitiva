class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        pre = strs[0]

        for s in strs:
            while not s.startswith(pre):
                pre = pre[:-1]
                if pre == "":
                    return ""
        
        return pre