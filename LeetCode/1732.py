class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        a = 0
        maxA = 0

        for e in range(len(gain)):
            a += gain[e]
            maxA = max(maxA, a)
        
        return maxA
