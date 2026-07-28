class Solution:
    def decodeString(self, s: str) -> str:
        stack = []
        k = 0
        curr = ""

        for e in s:
            if e.isdigit():
                k = k * 10 + int(e)
            elif e == "[":
                stack.append((k, curr))
                k = 0
                curr = ""
            elif e == "]":
                p, prev = stack.pop() 
                curr = prev + curr*p
            else:
                curr += e
            
            
        return curr