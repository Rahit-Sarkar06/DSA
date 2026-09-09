class Solution {
public:
    long long countCommas(long long n) {
        int cnt = 0;
        long long x = n;
        while (x > 0) {
            cnt++;
            x /= 10;
        }

        if (cnt <= 3) {
            return 0;
        } else if (cnt <= 6) {
            return n - 999;
        } else if (cnt <= 9) {
            long long t = 999999 - 999;
            return t + 2 * (n - 999999);
        } else if (cnt <= 12) {
            long long r = 999999 - 999;
            long long s = 2 * (999999999 - 999999);
            return r + s + (3 * (n - 999999999));
        } else if (cnt <= 15) {
            long long r = 999999 - 999;
            long long s = 2 * (999999999 - 999999);
            long long t = 3 * (999999999999 - 999999999);
            return r + s + t + (4 * (n - 999999999999));
        }
        long long r = 999999 - 999;
        long long s = 2 * (999999999 - 999999);
        long long t = 3 * (999999999999 - 999999999);
        long long u = 4 * (999999999999999 - 999999999999);

        return r + s + t + u + 5 * (n - 999999999999999);
    }
};