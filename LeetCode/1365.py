class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        dic = dict()
        l = []
        copy = sorted(nums)
        for c in range(len(copy)):
            if copy[c] not in dic:
                    dic[copy[c]] = c 
        
        for n in nums:
            if n in dic:
                l.append(dic[n])
        
        return l