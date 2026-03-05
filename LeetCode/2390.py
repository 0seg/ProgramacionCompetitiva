class Solution:
    def removeStars(self, s: str) -> str:
        l = []

        for e in s:
            if e == "*":
                l.pop()
            else:
                l.append(e)

        return "".join(l)