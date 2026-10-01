class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m1;
        unordered_map<char, char> m2;

        if (s.size() != t.size()) return false;

        for(size_t i{}; i<s.size(); ++i){
            if(m1.find(s[i]) != m1.end() or m2.find(t[i]) != m2.end()){
                if (m1[s[i]] != t[i] || m2[t[i]] != s[i]) {
                    return false;
            }
        }else{
            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
    }
        return true;
    }
};