class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        int m = pattern.size();
        int n = queries.size();

        vector<bool> ok;
        for (int i = 0; i < n; i++) {
            bool flag = true;
            int j = 0;
            int k = 0;
            int t = queries[i].size();
            while (j < t && k < m) {
                if (queries[i][j] == pattern[k]) {
                    j++;
                    k++;
                } else if (queries[i][j] >= 'a' && queries[i][j] <= 'z') {
                    j++;
                } else {
                    flag = false;
                    break;
                }
            }
            while (j < t) {
                if (queries[i][j] >= 'A' && queries[i][j] <= 'Z') {
                    flag = false;
                    break;
                }
                j++;
            }

            if (k != m) {
                flag = false;
            }
            ok.push_back(flag);
        }
        return ok;
    }
};