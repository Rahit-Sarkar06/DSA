class Solution {
public:
    int mySqrt(int x) {
        int i = 1;
        int j = x / 2;
        int ans;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            long long m = (long long)mid * mid;
            if (x == m) {
                return mid;
            } else if (m > x) {
                j = mid - 1;
            } else {
                ans = mid;
                i = mid + 1;
            }
        }
        return ans;
    }
};