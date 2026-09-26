class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;

        for(size_t i{}; i<nums.size(); i++){
            int x = abs(nums[i]);
            int pos = x - 1;
            if(nums[pos] < 0){
                duplicates.push_back(x);
            }else{
                nums[pos] *= -1;
            }
    }
    return duplicates;
    }
};