class Solution {
public:
    bool checkIfPangram(string sentence) {

        unordered_map<char, int> freq;
        for (char c : sentence) {
            freq[c]++;
        }
        int cnt = 0;
        for (auto p : freq) {
            cnt++;
        }

        return cnt == 26;
    }
};