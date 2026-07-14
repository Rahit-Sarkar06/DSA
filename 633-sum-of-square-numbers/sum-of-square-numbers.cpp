class Solution {
public:
    bool judgeSquareSum(int c) {

        int p = sqrt(c);
        long long i = 0;
        while (i <= p) {
            long long sum = i * i + p * p;
            if (sum == c) {
                return true;
            } else if (sum > c) {
                p--;
            } else {
                i++;
            }
        }

        return false;
    }
};