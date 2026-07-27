class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        k = {}
        s = set()

        for e in arr:
            if e in k:
                k[e] += 1
            else:
                k[e] = 1
        
        for a in k.values():
            if a in s:
                return False
            s.add(a)
        
        return True

                