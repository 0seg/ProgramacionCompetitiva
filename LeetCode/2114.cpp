class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int mw = 0;


        for(string e : sentences){
            int spaces = 0;
            for(char k : e){
                if(k == ' ') spaces++;            
            }
            int w = spaces + 1;
            mw = max(w, mw);

        }
    
        return mw;
    }
};