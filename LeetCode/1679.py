class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        v = {}
        ops = 0
        for e in nums:
            com = k - e
            if com in v and v[com] > 0:
                ops += 1
                v[com] -= 1
            else:
                v[e] = v.get(e, 0) + 1

        return ops