class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while (i < n - 1 && nums[i] < nums[i + 1]) {
            i++;
        }
        if (i == n - 1)
            return nums[0];
        return nums[i + 1];
    }
};