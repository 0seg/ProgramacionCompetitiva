class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s = 0;
        int best = nums[0];

        for (size_t i{0}; i<nums.size(); ++i){
            s += nums[i];

            best = max(best, s);

            if(s < 0){
                s = 0;
            }
        } 
        return best;
    }
};