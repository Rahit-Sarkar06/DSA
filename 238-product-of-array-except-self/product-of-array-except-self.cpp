class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(1);
        int m = 1, n = 1;
        for (int i = 1; i < nums.size(); i++) {
            m *= nums[i - 1];
            ans.push_back(m);
        }
        for (int j = nums.size() - 2; j >= 0; j--) {
            n *= nums[j + 1];
            ans[j] *= n;
        }
        return ans;
    }
};