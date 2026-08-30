class Solution {
public:
    int sumDecoded(vector<long long>& nums) {
        const long long M = 1'000'000'007;
        long long sum = 0;

        for (long long j : nums) {
            long long d = j / 10;
            int width = j % 10;

            long long temp = d;
            int digits = 0;

            while (temp > 0) {
                digits++;
                temp /= 10;
            }

            long long divisor = 1;

            for (int i = 0; i < digits - width; i++) {
                divisor *= 10;
            }

            long long x = d / divisor;
            long long y = d % divisor;

            long long r = 1;

            x = x % M;

            while (y > 0) {
                if (y & 1) {
                    r = r * x % M;
                }

                x = x * x % M;
                y >>= 1;
            }

            sum = (sum + r) % M;
        }

        return sum;
    }
};