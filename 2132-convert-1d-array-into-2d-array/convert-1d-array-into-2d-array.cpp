class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int p=original.size();
        
    
    vector<vector<int>> vec(m, vector<int>(n));
        int j=0;
        if(m*n==p){
        for(int r=0;r<m;r++){
            for(int s=0;s<n;s++){
                vec[r][s]=original[j];
                j++;
            }
        }
        }else{
            return { };
        }
        return vec;
    }
};