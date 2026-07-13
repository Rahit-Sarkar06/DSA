class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> p;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] - nums[i] > 1) {
                int m = nums[i] + 1;
                while (m != nums[i + 1]) {
                    p.push_back(m);
                    m++;
                }
            }
        }
        return p;
    }
};