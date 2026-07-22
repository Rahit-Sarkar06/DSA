class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> m;
        m.push_back(nums[0]);
        int n = nums.size();
        int i = 1;
        int cnt = 1;
        while (i < n) {
            if (nums[i] == nums[i - 1]) {
                cnt++;
            } else {
                cnt = 1;
            }
            if (cnt <= k)
                m.push_back(nums[i]);
            i++;
        }
        return m;
    }
};