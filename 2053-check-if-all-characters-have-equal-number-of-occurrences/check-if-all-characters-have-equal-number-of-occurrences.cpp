class Solution {
public:
    bool areOccurrencesEqual(string s) {
        char m = s[0];
        int cnt = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == m)
                cnt++;
        }
        unordered_map<char, int> freq;

        for (int num : s) {
            freq[num]++;
        }

        for (auto& pair : freq) {
            if (pair.second != cnt)
                return false;
        }
        return true;
    }
};