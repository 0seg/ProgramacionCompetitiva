class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        can = 0
        count = 0

        for e in nums:
            if count == 0: 
                can = e
            if e == can: 
                count +=1
            else: 
                count-=1
        return can