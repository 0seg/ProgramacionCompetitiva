class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr.sort()
        d = arr[1] - arr[0]
        for e in range(1,len(arr)):
            if arr[e] - arr[e-1] != d:
                return False
            
        return True
