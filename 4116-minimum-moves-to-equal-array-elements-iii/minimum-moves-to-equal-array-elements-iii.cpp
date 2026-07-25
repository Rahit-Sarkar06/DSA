class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int max = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] > max)
                max = nums[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += (max - nums[i]);
        }
        return cnt;
    }
};