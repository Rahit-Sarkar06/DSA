class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int xorr = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    xorr = xorr ^ nums[i];
                }
            }
        }
        return xorr;
    }
};