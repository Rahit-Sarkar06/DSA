class Solution {
public:
    int minOperations(int n) {
        int cnt = 0;
        for (int i = 1; i <= n; i += 2) {
            cnt += (n - i);
        }
        return cnt;
    }
};