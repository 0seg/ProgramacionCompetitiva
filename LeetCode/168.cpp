class Solution {
public:
    string convertToTitle(int columnNumber) {
        char l;
        string f;

        while(columnNumber > 0){
            l = 'A' + (columnNumber - 1) % 26;
            f += l;
            columnNumber = (columnNumber-1) / 26; 
        }
        reverse(f.begin(), f.end());
        return f;
    }
};