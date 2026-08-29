class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> k;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<nums.size(); i+=2){
            k.push_back(nums[i+1]);
            k.push_back(nums[i]);
        }

        return k;
    }
};