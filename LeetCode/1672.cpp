class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;        

        for(int i = 0; i<=accounts.size()-1; i++){
            int s = 0;
            for(int f = 0; f<= accounts[i].size()-1; f++){
                s += accounts[i][f];
            }
            if (s > max){
                max = s;
            }

        }
        return max;

    }
};