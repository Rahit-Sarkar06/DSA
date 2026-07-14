class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int m = -1;
        int k = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                if (m == -1) {
                    m = i;
                    k = i;
                }
                k = i;
            }
        }
        vector<int> t(2);
        t[0] = m;
        t[1] = k;
        return t;
    }
};