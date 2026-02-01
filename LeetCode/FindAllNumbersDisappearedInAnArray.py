#  Solution 1

class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        l = []
        s = set(nums)

        for e in range(1, len(nums)+1):
            if not e in s:
                l.append(e)
        return l
    
# Solution 2 

class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        l = []
        for e in range(0, len(nums)):
            x = abs(nums[e])-1
            if nums[x] > 0:
                nums[x] *= -1 
        for e in range(0, len(nums)):
            if nums[e] > 0:
                l.append(e+1)
        return l