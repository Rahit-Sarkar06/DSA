class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> m(n);
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int i = n - 1;
        while (i >= 0) {
            mini = min(nums[i], mini);
            m[i] = mini;
            i--;
        }
        i = 0;
        while (i < n) {
            maxi = max(nums[i], maxi);
            if (maxi - m[i] <= k)
                return i;
            i++;
        }
        return -1;
    }
};