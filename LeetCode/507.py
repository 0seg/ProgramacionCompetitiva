class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        if num < 2:
            return False
        s =1
        for e in range(2, int(num**0.5) + 1):
            if num % e == 0:
                s += e
                if e != num // e:
                    s += num//e
        return num == s