class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int cnt = 0;
        sort(banned.begin(), banned.end());
        int sum = 0;
        int t = 0;
        for (int i = 1; i <= n; i++) {
            if (t < banned.size() && i == banned[t]) {
                while (t < banned.size() && banned[t] == i) {
                    t++;
                }
            } else {
                if (i + sum > maxSum)
                    break;
                cnt++;
                sum += i;
            }
        }
        return cnt;
    }
};