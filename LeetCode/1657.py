class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        k1 = {} 
        k2 = {}

        if len(word1) != len(word2):
            return False

        for i in range(len(word1)):
            if word1[i] in k1:
                k1[word1[i]] += 1
            else:
                k1[word1[i]] = 1

            if word2[i] in k2:
                k2[word2[i]] += 1
            else:
                k2[word2[i]] = 1

        return (set(k1.keys()) == set(k2.keys()) and sorted(k1.values()) == sorted(k2.values()))
