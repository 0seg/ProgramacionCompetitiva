class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = -1;
        int minn = INT_MAX;         
        int s = 0;

        for (int r{}; r<nums.size(); ++r){
            s+=nums[r];

            while (s>= target){

                minn = min(minn, (r - l));

                ++l;

                s -= nums[l];
            }
            }      

            if(minn == INT_MAX) return 0;
            else return minn;
    }
};