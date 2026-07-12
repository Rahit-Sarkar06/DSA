class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s = word1[0];
        string m = word2[0];
        for (int i = 1; i < word1.size(); i++) {
            s += word1[i];
        }
        for (int i = 1; i < word2.size(); i++) {
            m += word2[i];
        }
        return s == m;
    }
};