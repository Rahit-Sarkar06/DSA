class Solution {
public:
    int alternateDigitSum(int n) {
        int k = n;
        int cnt = 0;
        while (k > 0) {
            cnt++;
            k /= 10;
        }
        int m = 1;
        if (cnt % 2 == 0) {
            m = -1;
        }
        int sum = 0;
        while (n > 0) {
            int rem = n % 10;
            rem = rem * m;
            m = m * (-1);
            sum = sum + rem;
            n = n / 10;
        }
        return sum;
    }
};