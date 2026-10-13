class Solution {
public:
    bool detectCapitalUse(string word) {

        if (word.size() == 1) return true;

        for(size_t i{}; i<word.size(); ++i){

            if(islower(word[0])){
                if(!islower(word[i])) return false;
            }
            else if(isupper(word[0]) && isupper(word[1])){
                if(!isupper(word[i])) return false;
            }
            else{
                if( i > 0 && !islower(word[i])) return false;
            }

        }
        return true;
    }
};