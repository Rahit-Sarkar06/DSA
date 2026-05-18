class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=0;i<numRows;i++){
            vector<int>row;
            long long first=1;
            row.push_back(first);
            for(int j=1;j<=i;j++){
                first=first*(i-j+1)/j;
                row.push_back((int)first);
            }
            result.push_back(row);
           
        }
        return result;
    }
};