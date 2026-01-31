class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        c = 0
        for e in nums:
            if len(str(e)) % 2 == 0:
                c+=1

        return c