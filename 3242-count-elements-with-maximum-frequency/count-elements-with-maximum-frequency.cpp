class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxc = 0, cnt = 0;

        for (int num : nums) {
            freq[num]++;
        }

        for (auto it : freq) {
            maxc = max(maxc, it.second);
        }
        for (auto it : freq) {
            if (it.second == maxc)
                cnt += maxc;
        }

        return cnt;
    }
};