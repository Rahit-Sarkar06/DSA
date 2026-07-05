class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int cnt = 0;
        int n = target;
        if (n % 2 != 0) {
            cnt++;
            n--;
        }
        while (n > 1 && maxDoubles > 0) {
            if (n % 2 != 0) {
                cnt++;
                n--;
            }
            n = n / 2;
            cnt++;
            maxDoubles--;
        }
        cnt += n - 1;
        return cnt;
    }
};