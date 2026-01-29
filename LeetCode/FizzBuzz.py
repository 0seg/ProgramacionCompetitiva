class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        ls = []
        for e in range(1, n+1):
            if e % 3 == 0 and e % 5 == 0:
                ls.append("FizzBuzz")
            elif e % 3 == 0:
                ls.append("Fizz")
            elif e % 5 == 0:
                ls.append("Buzz")
            else:
                ls.append(str(e})
        return ls