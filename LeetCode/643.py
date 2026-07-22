class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        csum = 0

        for e in range(k):
            csum += nums[e]
                
        max_sum = csum

        for e in range(k, len(nums)):
            csum += nums[e] - nums[e-k]
            max_sum = max(max_sum, csum)

        return max_sum / k