class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        res = []
        for a, b in zip(word1, word2):
            res.append(a)
            res.append(b)
        i = len(res) // 2
        res.append(word1[i:])
        res.append(word2[i:])

        return "".join(res)