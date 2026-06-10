class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n=accounts[0].size();
        int max=0;
        for(int i=0;i<m;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                cnt+=accounts[i][j];
            }
            if(cnt>max){
                max=cnt;
            }
        }
        return max;
    }
};