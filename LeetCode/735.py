class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        stack = []

        for e in asteroids:

            while stack and stack[-1]>0 and e < 0:
                if abs(stack[-1]) < abs(e):
                    stack.pop()
                    continue

                elif abs(stack[-1]) > abs(e):
                    break
                else:
                    stack.pop()
                    break
            else:
                stack.append(e)

        return stack