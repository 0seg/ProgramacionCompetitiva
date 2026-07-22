class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        l = 0
        coZeros = 0
        maxOnes = 0

        for r in range(len(nums)):
            if nums[r] == 0:
                coZeros += 1
            
            while coZeros > 1:
                if nums[l] == 0:
                    coZeros -= 1
                l += 1
            
            maxOnes = max(maxOnes, r-l)

        return maxOnes