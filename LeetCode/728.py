class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        l =[]
        for e in range(left, right + 1):
            temp = e
            while temp != 0:
                dig = temp % 10 
                if dig == 0:
                    break
                if e % dig != 0:
                    break
                temp//=10
            else:
                l.append(e)

        return l