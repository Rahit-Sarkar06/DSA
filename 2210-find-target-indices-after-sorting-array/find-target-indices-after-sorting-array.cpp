class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> m;
        int n = nums.size();

        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] == target)
                m.push_back(i);
        }
        return m;
    }
};