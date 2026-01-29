class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        c= 0
        for x in nums:
            c ^= x

        return c