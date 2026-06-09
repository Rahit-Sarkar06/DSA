class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> n;
        int p = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < p - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                n.push_back(nums[i]);
            }
        }
        return n;
    }
};