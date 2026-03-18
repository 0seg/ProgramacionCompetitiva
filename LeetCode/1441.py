class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        arr = []
        i = 0
        for e in range(1,n+1):
            arr.append("Push")
            if i < len(target):
                if e == target[i]:
                    i+=1
                else:
                    arr.append("Pop")
            if i == len(target):
                break
        return arr