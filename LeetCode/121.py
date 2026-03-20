class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        m = prices[0]
        profit = 0

        for e in range(len(prices)):
            m = min(m, prices[e])
            profit = max(profit, prices[e]-m)

        return profit