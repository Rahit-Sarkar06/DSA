class Solution {
public:
    int maxDistinct(string s) {
        int cnt = 0;
        unordered_map<char, int> freq;

        for (int x : s) {
            freq[x]++;
        }
        for (auto& p : freq) {
            cnt++;
        }
        return cnt;
    }
};