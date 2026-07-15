class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> cnt(1);
        int n = sentences.size();
        int t = 0;
        for (int i = 0; i < n; i++) {
            int m = sentences[i].size();
            int cntt = 0;
            for (int j = 1; j < m - 1; j++) {
                if (sentences[i][j] == ' ') {
                    cntt++;
                }
            }
            cntt++;

            t = max(cntt, t);
        }

        return t;
    }
};