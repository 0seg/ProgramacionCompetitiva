class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        left = 0
        current_sum = 0
        min_len = float('inf')


        for e in range(0, len(nums)):
            current_sum += nums[e]

            while current_sum >= target: 
                min_len = min(min_len, e-left+1)
                current_sum -= nums[left]
                left+=1
        
        return 0 if min_len == float('inf') else min_len