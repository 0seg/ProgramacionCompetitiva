class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        l = []
        
        for e in range(n):
            l.append(nums[e])
            l.append(nums[e + n])

        return ls
