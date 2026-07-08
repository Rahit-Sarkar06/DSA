class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int cnt = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            cnt += nums[i];
            nums[i] = cnt;
        }
        return nums;
    }
};