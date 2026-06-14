class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int m = num;
        while (m > 0) {
            if (num % (m % 10) == 0) {
                cnt++;
            }
            m /= 10;
        }
        return cnt;
    }
};