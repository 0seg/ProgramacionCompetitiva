class Solution:
    def isPalindrome(self, s: str) -> bool:
        return ''.join(ch for ch in s.lower() if ch.isalnum()) == ''.join(ch for ch in s.lower() if ch.isalnum())[::-1]
