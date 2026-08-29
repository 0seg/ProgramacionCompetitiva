class Solution {
public:
    int countDigits(int num) {
        int c = 0;
        int k = num;

        while (num > 0){
            int f = num % 10;
            
            if (k % f == 0) c++;

            num /= 10;
        }
        return c;
        
    }
};