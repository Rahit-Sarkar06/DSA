class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> m(n);
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for (int i = n - 1; i >= 0; i--) {
            mini = min(nums[i], mini);
            m[i] = mini;
        }

        for (int i = 0; i < n; i++) {
            maxi = max(nums[i], maxi);
            if (maxi - m[i] <= k)
                return i;
        }
        return -1;
    }
};