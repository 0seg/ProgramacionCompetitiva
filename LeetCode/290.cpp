class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m1;
        unordered_map<string, char> m2;
            
        if (pattern.size() != std::ranges::count(s.begin(), s.end(), ' ') + 1 )     return false;

        size_t pos = 0;

        for(size_t i{}; i<pattern.size(); ++i){
            string word;

            while (pos < s.size() && s[pos] != ' ') {
                word += s[pos];
                ++pos;
            }
            if (pos < s.size()) {
                ++pos;
            }

                        
            if(m1.find(pattern[i]) != m1.end() || m2.find(word) != m2.end() ){
                if(m1[pattern[i]] != word || m2[word] != pattern[i]){
                    return false;
                }
            }else{
                m1[pattern[i]] = word;
                m2[word] = pattern[i];
                }
        }
        return true;
    }
};