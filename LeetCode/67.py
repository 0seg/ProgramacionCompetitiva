class Solution:
    def addBinary(self, a: str, b: str) -> str:
        carry, total = 0, 0
        e,f = len(a)-1, len(b)-1
        res = []

        while e >= 0 or f >= 0 or carry:
            bitA = int(a[e]) if e >= 0 else 0
            bitB = int(b[f]) if f >= 0 else 0
            total = bitA + bitB + carry
            carry = total//2
            total %= 2
            res.append(str(total))

            e -= 1
            f -= 1

        return "".join(res[::-1])