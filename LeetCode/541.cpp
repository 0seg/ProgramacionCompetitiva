class Solution {
public:
    string reverseStr(string s, int k) {
        
        for(int i{0}; i<s.size(); i+=2*k){

            int in = i;
            int fn = min(i + k - 1, (int)s.size() - 1);

            while(in < fn){            
                swap(s[in], s[fn]);
                ++in;
                --fn;
            }
        }

        return s;
    }
};