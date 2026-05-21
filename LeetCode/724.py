class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        st = sum(nums)
        sI = 0 

        for e, val in enumerate(nums):

            sD = st - sI - nums[e]

            if sI == sD:
                return e

            sI += val

        return -1