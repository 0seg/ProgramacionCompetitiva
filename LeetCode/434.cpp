class Solution {
public:
    int countSegments(string s) {
        int k{};
        for(size_t i{}; i<s.size(); ++i){
            if(i == 0 and s[i] != ' '){
                k = 1;
            }
            else{
                if(s[i] != ' ' and s[i-1]   == ' '){
                    ++k;
                }
            }
        }
        return k;
    }
    
};