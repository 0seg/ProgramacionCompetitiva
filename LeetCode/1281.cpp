class Solution {
public:
    int subtractProductAndSum(int n) {
        long long p = 1;
        long long s = 0;

        while (n > 0){
            int k = n % 10;
            p *= k;
            s += k;
            n/= 10;
        }

        return p-s;

    }
};