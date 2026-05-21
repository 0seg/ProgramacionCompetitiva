class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        s = 0
        m = {0 : -1} 
        max_len = 0 

        for e in range(0, len(nums)):
            if nums[e] == 0:
                s -= 1
            else:
                s += 1
                
            if s not in m:
                m[s] = e
            else:
                max_len = max(max_len, e - m[s]) 
                
        return max_len 