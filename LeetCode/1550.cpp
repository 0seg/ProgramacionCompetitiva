class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int o = 0;

        for(int i = 0; i<arr.size()-1; i++){
            if(arr[i] % 2 != 0) o++;
            else o = 0;
            if(o == 3) return true;
        }
        return false;
    
    }
};
