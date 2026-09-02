class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> aux;

        for(int i = 0; i < words.size(); i++){
            if(words[i].find(x) != string::npos){
                aux.push_back(i);
            }
        }
        return aux;
    }
};