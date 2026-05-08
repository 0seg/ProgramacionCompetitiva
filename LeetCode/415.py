class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        i = len(num1) - 1
        j = len(num2) - 1
        l = []
        carry = 0

        while i >= 0 or j >= 0 or carry: 
            digit1 = int(num1[i]) if i >= 0 else 0
            digit2 = int(num2[j]) if j >= 0 else 0

            n = digit1 + digit2 + carry
    
            carry = n // 10
            n %= 10
            i-=1
            j-=1

            l.append(n)

        return ''.join(str(x) for x in l[::-1])