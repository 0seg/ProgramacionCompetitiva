class Solution:
    def isHappy(self, n: int) -> bool:
        ss = set()

        while n != 1:
            if n in ss:
                return False
            else:
                ss.add(n)
                s = 0
                while n != 0:
                    dg = n % 10
                    s +=  dg ** 2
                    n //= 10
                n = s
        return True