class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> m;
        for (int i = 0; i < nums.size(); i++) {
            int p = nums[i];
            string str = to_string(p);
            for (int j = 0; j < str.size(); j++) {
                m.push_back(str[j] - '0');
            }
        }
        return m;
    }
};