class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int p = nums[i];
            if (p >= max1) {
                max2 = max1;
                max1 = p;
            } else if (p < max1 && p > max2) {
                max2 = p;
            }
            if (p <= min1) {
                min2 = min1;
                min1 = p;
            } else if (p > min1 && p < min2) {
                min2 = p;
            }
        }
        return max1 * max2 - min1 * min2;
    }
};