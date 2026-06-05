class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>v;
        int count=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                count+=matrix[i][j];
            }
            v.push_back(count);
            count=0;
        }
        return v;
    }
};