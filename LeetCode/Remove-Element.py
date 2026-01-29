class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        
        nums = [e for e in nums if e != val]
        return len(nums)