class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> m;
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                if (cnt > n / 3)
                    m.push_back(nums[i - 1]);
                cnt = 1;
            } else {
                cnt++;
            }
        }
        if (cnt > n / 3)
            m.push_back(nums[n - 1]);
        return m;
    }
};