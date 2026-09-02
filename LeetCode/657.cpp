class Solution {
public:
    bool judgeCircle(string moves) {
        pair<int, int> p = {0, 0};

        for(auto x : moves){
            if(x == 'R') p.first++;
            else if(x == 'L') p.first--;
            else if(x == 'U') p.second++;
            else if(x == 'D') p.second--;
        }

        return p.first == 0 && p.second == 0;
    }
};