class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }
        vector<int> ans(nums.size());
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < pos.size() && j < neg.size()) {
            if (k % 2 == 0) {
                ans[k] = pos[i];
                i++;
                k++;
            } else {
                ans[k] = neg[j];
                j++;
                k++;
            }
        }
        ans[k] = neg[j];
        return ans;
    }
};