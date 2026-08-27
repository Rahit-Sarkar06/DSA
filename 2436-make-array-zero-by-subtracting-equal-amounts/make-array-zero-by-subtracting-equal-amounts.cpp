class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int i : nums) {
            freq[i]++;
        }
        int cnt = 0;
        for (auto p : freq) {
            if (p.first != 0)
                cnt++;
        }
        return cnt;
    }
};