class Solution:
    def isPalindrome(self, s: str) -> bool:
        return (e := "".join(c.lower() for c in s if c.isalnum())) == e[::-1]


