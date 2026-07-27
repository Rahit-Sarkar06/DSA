class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                reverse(words[j].begin(), words[j].end());
                if (words[i] == words[j])
                    cnt++;
                reverse(words[j].begin(), words[j].end());
            }
        }
        return cnt;
    }
};