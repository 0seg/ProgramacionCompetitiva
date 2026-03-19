class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        for e in range(len(digits)-1, -1, -1):
            if digits[e] == 9:
                digits[e] = 0
            else:
                digits[e] += 1
                break
        else:
            digits.insert(0,1)
        return digits