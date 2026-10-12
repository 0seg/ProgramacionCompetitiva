class Solution {
public:
    string truncateSentence(string s, int k) {
        size_t c{};

        for(size_t i{}; i<s.size(); ++i){
            if(s[i] == ' '){
                ++c;
                if(c == k){
                    return s.substr(0, i);
                }
            }
     
        }
        return s;
    }
};