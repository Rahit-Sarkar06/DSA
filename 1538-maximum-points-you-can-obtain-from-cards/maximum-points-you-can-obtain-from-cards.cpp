class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int arrsum = 0;
        for (int i = 0; i < n; i++) {
            arrsum += cardPoints[i];
        }
        k = n - k;
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }
        if (sum == 0) {
            return arrsum;
        }

        int mini = sum;
        for (int i = k; i < n; i++) {
            int m = sum - cardPoints[i - k] + cardPoints[i];
            sum = m;
            mini = min(mini, m);
        }
        return arrsum - mini;
    }
};