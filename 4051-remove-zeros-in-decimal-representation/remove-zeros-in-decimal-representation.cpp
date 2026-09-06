class Solution {
public:
    long long removeZeros(long long n) {
        long long m = 0;
        while (n > 0) {
            if (n % 10 != 0) {
                m = m * 10 + (n % 10);
            }
            n /= 10;
        }
        n = 0;
        while (m > 0) {
            n = n * 10 + (m % 10);
            m /= 10;
        }
        return n;
    }
};