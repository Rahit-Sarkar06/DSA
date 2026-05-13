class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
          int m=grid.size();
        bool flag=true;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if(((i==j || (i+j)==m-1) && grid[i][j]!=0) || ((i!=j && (i+j)!=m-1)  && grid[i][j]==0)){
                    flag=true;
                }else{
                   return false; 
                }
            }
        }
        return true;
    }
};