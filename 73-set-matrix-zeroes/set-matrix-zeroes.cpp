class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix[0].size();
        int n = matrix.size();
        vector<int> col(m);
        vector<int> row(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    col[j] = 1;
                    row[i] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (col[j] == 1 || row[i] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};