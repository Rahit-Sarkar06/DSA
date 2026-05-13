class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int p=matrix.size();
        int q=matrix[0].size();
        vector<vector<int>> vec(q, vector<int>(p));
        for(int m=0;m<p;m++){
            for(int n=0;n<q;n++){
                vec[n][m]=matrix[m][n];
            }
        }
        return vec;
    }
};