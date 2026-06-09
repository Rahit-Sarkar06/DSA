class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> n;
        int p = nums.size();
        map<int, int> mpp;
        for (int i = 0; i < p; i++) {
            mpp[nums[i]]++;
        }
        for (auto it : mpp) {
            if (it.second == 2) {
                n.push_back(it.first);
            }
        }
        return n;
    }
};