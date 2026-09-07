class Solution {
public:
    bool checkPowersOfThree(int n) {
        int prev = -1;
        while (n > 0) {
            int t = 1;
            while (n >= t * 3) {
                t = t * 3;
            }
            if (prev == t)
                return false;
            prev = t;
            n = n - t;
        }
        return (n == 0);
    }
};