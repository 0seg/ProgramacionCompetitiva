class Solution {
public:
    string reversePrefix(string word, char ch) {


        for(size_t i{}; i<word.size(); ++i){
            if(word[i] == ch){
                reverse(word.begin(), word.begin()+i+1);
                return word;
            }
        }
        return word;
        
    }
};