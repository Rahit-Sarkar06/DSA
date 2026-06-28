class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> m;
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        for (auto it : freq) {
            m.push_back(it.second);
        }
        int max = 0;
        for (int i = 0; i < m.size(); i++) {
            if (m[i] > max)
                max = m[i];
        }
        int cnt = 0;
        for (int j = 0; j < m.size(); j++) {
            if (m[j] == max) {
                cnt += max;
            }
        }
        return cnt;
    }
};