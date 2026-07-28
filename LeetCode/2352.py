class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        k = {}
        ans = 0

        for e in grid:
            if tuple(e) in k:
                k[tuple(e)] += 1
            else:
                k[tuple(e)] = 1

        for j in range(len(grid)):
            col = []

            for e in range(len(grid)):
                col.append(grid[e][j]) 
            
            col = tuple(col)

            if col in k: 
                ans += k[col]
            
        return ans 