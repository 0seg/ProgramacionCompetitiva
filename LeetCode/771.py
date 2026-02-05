class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        jewels = set(jewels)
        s=0
        for e in stones:
            if e in jewels:
                s+=1
        return s
