class Solution:
    def pivotInteger(self, n: int) -> int:
        import math
        s = ((n*(n+1))/2)**0.5
        if s.is_integer():   
            return int(s)
        else:
            return -1
