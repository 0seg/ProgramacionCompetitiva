
class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        m = max(candies)
        t = []
        for c in candies:
            t.append(c + extraCandies >= m)
        return t
