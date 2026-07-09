class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> m;
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        vector<pair<int, int>> freqVec(freq.begin(), freq.end());

        sort(freqVec.begin(), freqVec.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });

        for (auto& p : freqVec) {
            if (k == 0)
                break;
            m.push_back(p.first);
            k--;
        }
        return m;
    }
};