class Solution {
public:
    int sumOfMultiples(int n) {
        int s = 0;

        for (int u = 1; u <= n; u++){
            if(u % 3 == 0 or u % 5 == 0 or u % 7 == 0){
                s+=u;
            }

        }
        return s;
    }
};