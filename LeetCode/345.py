class Solution:
    def reverseVowels(self, s: str) -> str:
        e = 0
        f = len(s)-1
        sset = set("aeiouAEIOU")
        l = list(s)

        while e < f:
            if l[e] not in sset:
                e+=1
            elif l[f] not in sset:
                f-=1

            else:
                l[e], l[f] = l[f], l[e]
                e+=1
                f-=1

        return "".join(l)
            
