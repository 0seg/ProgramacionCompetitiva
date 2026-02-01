class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [1] * n
        l, r = 1, 1
        i, j = 0, n - 1

        while i < n and j >= 0:
            ans[i] *= l
            ans[j] *= r

            l *= nums[i]
            r *= nums[j]

            i += 1
            j -= 1

        return ans
