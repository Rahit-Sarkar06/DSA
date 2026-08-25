class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int m = -1;
        int t = k;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == t) {
                t += k;
            }
        }
        return t;
    }
};