class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> t;
        int x = -1;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = n - 1;

        while (i >= 0) {
            if (nums[i] != x) {
                t.push_back(nums[i]);
                x = nums[i];
                k--;
            }
            if (k == 0)
                break;
            i--;
        }
        return t;
    }
};