class Solution {
public:
    long sum(vector<int>& nums, int m) {
        long long s = 0;
        for (int i = 0; i < nums.size(); i++) {
            s += ceil((double)nums[i] / m);
        }
        return s;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (piles[i] > ans) {
                ans = piles[i];
            }
        }
        int i = 1;
        int j = ans;

        while (i <= j) {
            int mid = i + (j - i) / 2;
            long long p = sum(piles, mid);
            if (p <= h) {
                ans = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return ans;
    }
};