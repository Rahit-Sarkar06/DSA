class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> m;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        m.push_back(sum - nums[0]);
        int left = 0;
        int right = sum - nums[0];
        for (int i = 1; i < n; i++) {
            left += nums[i - 1];
            right -= nums[i];
            m.push_back(abs(right - left));
        }
        return m;
    }
};