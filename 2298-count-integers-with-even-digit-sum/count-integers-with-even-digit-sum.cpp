class Solution {
public:
    int countEven(int num) {
        int cnt = 0;
        for (int i = 2; i <= num; i++) {
            int sum = 0;
            int p = i;
            while (p > 0) {
                sum += (p % 10);
                p /= 10;
            }
            if (sum % 2 == 0)
                cnt++;
        }
        return cnt;
    }
};