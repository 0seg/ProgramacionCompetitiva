class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        l = 0
        setVowel = set("aeiou")
        couVo, maxVo = 0, 0

        for r in range(len(s)):
            if s[r] in setVowel:
                couVo += 1

            if (r-l) + 1 > k:
                if s[l] in setVowel:
                    couVo -= 1
                l += 1
            if (r-l) + 1 == k:
                maxVo = max(maxVo, couVo)

        return maxVo