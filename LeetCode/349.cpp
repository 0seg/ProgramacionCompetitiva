class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> k;
        vector<int> o;
        for(auto x : nums1){
            k.insert(x);
        } 
        for(auto x : nums2){
            if (k.find(x) != k.end()){
                o.push_back(x);
                k.erase(x);
                
            }
        }
        return o;
    }
};