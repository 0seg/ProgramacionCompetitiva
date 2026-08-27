class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26);

        for (int f = 0; f<magazine.size(); f++){
            freq[magazine[f] - 'a']++;
        }

        for (int f = 0; f<ransomNote.size(); f++){
            if (freq[ransomNote[f]-'a'] == 0) return false;
            else{
                freq[ransomNote[f]-'a']--;
            }

            
        }
        return true;
    }
};