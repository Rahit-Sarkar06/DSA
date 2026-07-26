class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (nums[i] < 10) {
                single += nums[i];
            }
        }

        if (sum - single != single)
            return true;
        return false;
    }
};