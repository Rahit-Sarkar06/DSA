class Solution {
public:
    bool isPresent(string word, string pre) {
        int k = 0;
        while (k < pre.size()) {
            if (pre[k] != word[k]) {
                return false;
            }
            k++;
        }
        return true;
    }
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            if (isPresent(words[i], pref) == true) {
                cnt++;
            }
        }
        return cnt;
    }
};