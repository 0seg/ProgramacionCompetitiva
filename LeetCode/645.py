class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        s = set()
        dup = 0
        for n in nums:
            if n in s:
                dup= n
            else:
                s.add(n)

        for i in range(1, len(nums)+1):
            if i not in s:
                miss = i
        
        return [dup, miss]
