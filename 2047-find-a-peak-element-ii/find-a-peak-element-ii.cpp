class Solution {
public:
    int val(vector<vector<int>>& mat, int col) {
        int maxi = -1;
        int ind = -1;
        for (int i = 0; i < mat.size(); i++) {
            if (mat[i][col] > maxi) {
                maxi = mat[i][col];
                ind = i;
            }
        }
        return ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int i = 0;
        int j = m - 1;
        while (i <= j) {
            int mid = (i + j) / 2;
            int maxind = val(mat, mid);
            int left, right;
            if (mid - 1 >= 0) {
                left = mat[maxind][mid - 1];
            } else {
                left = -1;
            }
            if (mid + 1 < m) {
                right = mat[maxind][mid + 1];
            } else {
                right = -1;
            }
            if (mat[maxind][mid] > left && mat[maxind][mid] > right) {
                return {maxind, mid};
            } else if (mat[maxind][mid] < left) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return {-1, -1};
    }
};