class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                m.push_back(0);
            } else {
                m.push_back(1);
            }
        }
        sort(m.begin(), m.end());
        return m;
    }
};