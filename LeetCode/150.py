class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        s = []
        t = 0
        dic = {"+": lambda a,b: a + b, "-": lambda a,b: a-b, "/": lambda a,b: int(a/b), "*": lambda a,b: a*b}


        for p in tokens:
            if p in dic:
                b = s.pop()
                a = s.pop()
                t = dic[p](a,b)
                s.append(t)
            else:
                s.append(int(p))
        
        return s[-1]