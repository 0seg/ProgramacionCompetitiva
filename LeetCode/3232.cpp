class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
      int s = 0;
      int s2 = 0;

      for(auto x : nums){
        if(x < 10) s += x;
        else s2 += x; 
      }  


      return s!=s2;
    }
};