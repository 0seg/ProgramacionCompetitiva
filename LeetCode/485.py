class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxCons= 0
        p = 0
        for e in nums:
            if e == 1:
                maxCons+=1
                p = max(p, maxCons)
            if e == 0:
                maxCons = 0
        return p
