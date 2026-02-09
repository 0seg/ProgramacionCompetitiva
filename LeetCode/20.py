class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for e in s:
            if e == ')':
                if not stack or stack.pop() != '(':
                    return False
            elif e == '}':
                if not stack or stack.pop() != '{':
                    return False
            elif e == ']':
                if not stack or stack.pop() != '[':
                    return False
            else:
                stack.append(e)

        
        return not stack