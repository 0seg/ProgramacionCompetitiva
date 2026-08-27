class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        vector<pair<int,int>> t;

        for(int e = 0; e < mat.size(); e++){
            int s = 0;
            for(int f = 0; f<mat[e].size(); f++){
                if(mat[e][f] == 0){
                    break;
                }else s++;
            }
            t.push_back({s, e});

        }
        sort(t.begin(), t.end());
        vector<int> p;
        
        for(int l = 0; l < k; l++ ){
            p.push_back(t[l].second);
        }

        return p;
        
    }
};