class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int left = 0;
        for (int i = 1; i < nums.size(); i++) {
            left += nums[i - 1];
            if ((abs(left - (sum - left))) % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};