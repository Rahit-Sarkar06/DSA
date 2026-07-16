class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int, int> freq;

        for (char c : nums) {
            freq[c]++;
        }

        for (auto p : freq) {
            if (p.second % 2 != 0)
                return false;
        }
        return true;
    }
};