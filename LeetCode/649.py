from collections import deque
class Solution:
    def predictPartyVictory(self, senate: str) -> str:
        sR = deque()
        sD = deque()

        for e in range(len(senate)):
            if senate[e] == 'R':
                sR.append(e)
            else:
                sD.append(e)

        while sR and sD:
            r = sR.popleft()
            d = sD.popleft()

            if r < d:
                sR.append(r + len(senate))

            else:
                sD.append(r+ len(senate))
        
        if sR:
            return "Radiant"
        else:
            return "Dire"