class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> v;
        vector<int> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(), v.end());
        int p = ((n * n) * (n * n + 1)) / 2;
        int sum = 0;
        for (int i = 0; i < n * n; i++) {
            sum += v[i];
        }
        for (int i = 1; i < n * n; i++) {
            if (v[i] == v[i - 1]) {
                m.push_back(v[i]);
                m.push_back(p - (sum - v[i]));
                break;
            }
        }
        return m;
    }
};