class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        f = float('inf')
        s = float('inf')

        for e in range(0, len(nums)):
            if nums[e] < f:
                f = nums[e]
            if nums[e] > f and nums[e] < s:
                s = nums[e]
            if nums[e] > s:
                return True
        return False