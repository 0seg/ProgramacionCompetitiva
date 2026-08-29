class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for(string s : words){
            bool f = true;

            int a = 0;
            int b = s.size()-1;
        
            while (a < b){
                if (s[a] != s[b]){
                    f = false;
                    break;
                }
                a++;
                b--;
            }

            if (f) return s;

        }
        return "";

    }
};