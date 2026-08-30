class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, int> m;

        int s = 0;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                m[nums[i]]++;
            }
        }

        m[nums[nums.size() - 1]]++;

        for (auto x : m) {
            if (x.second == 1) {
                s++;
            }
        }

        return s;
    }
};