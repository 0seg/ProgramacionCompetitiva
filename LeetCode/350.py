class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        from collections import Counter 
        a = Counter(nums1)
        b = Counter(nums2)

        k=[]
        for x in a:
            if x in b:
                l = min(a[x], b[x])
                for _ in range(l):
                    k.append(x)
        return k