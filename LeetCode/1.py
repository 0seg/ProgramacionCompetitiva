class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic = dict()
        for i, n in enumerate(nums):
            x = target-n
            if x in dic:
                return [dic[x], i]
            dic[n] = i
        