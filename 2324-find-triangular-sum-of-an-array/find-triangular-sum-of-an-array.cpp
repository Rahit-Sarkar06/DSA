class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int s = nums.size();
        while (s > 1) {

            for (int i = 0; i < s - 1; i++) {
                int tmp = nums[i] + nums[i + 1];
                if (tmp >= 10)
                    tmp = tmp - 10;
                nums[i] = tmp;
            }
            s--;
        }
        return nums[0];
    }
};