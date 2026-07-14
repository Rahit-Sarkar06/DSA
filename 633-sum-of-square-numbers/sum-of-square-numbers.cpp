class Solution {
public:
    bool judgeSquareSum(int c) {
        long long t = sqrt(c / 2);
        if (2 * t * t == c)
            return true;
        long long p = sqrt(c) + 1;
        long long i = 0;
        while (i < p) {
            if (i * i + p * p == c) {
                return true;
            } else if (i * i + p * p > c) {
                p--;
            } else {
                i++;
            }
        }

        return false;
    }
};