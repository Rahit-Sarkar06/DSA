class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size();
        int m = boxGrid[0].size();

        vector<vector<char>> ans(m, vector<char>(n));

        for (int t = n - 1; t >= 0; t--) {
            int j = m - 1;

            for (int i = m - 1; i >= 0; i--) {

                if (boxGrid[t][i] == '*') {
                    j = i - 1;
                } else if (boxGrid[t][i] == '#') {
                    swap(boxGrid[t][i], boxGrid[t][j]);
                    j--;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[j][n - 1 - i] = boxGrid[i][j];
            }
        }

        return ans;
    }
};