class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l = 0
        r = len(nums) - 1

        while l <= r:
            mid = l + (r-l)//2

            if target == nums[mid]:
                return mid
            
            elif target < nums[mid]:
                r = mid - 1
            
            elif target > nums[mid]:
                l = mid + 1
        return l