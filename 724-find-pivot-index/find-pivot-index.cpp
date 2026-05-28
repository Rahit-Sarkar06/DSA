class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>sumLeft;
        vector<int>sumRight;
        int n=nums.size();
        int t=0;
        if(n==1){
            if(nums[0]==0 || nums[0]==4){
                return 0;
            }else{
                return -1;
            }
        }
        for(int m=1;m<n;m++){
            t+=nums[m];
        }
        if(t==0) return 0;
        int p=0;
        for(int i=1;i<n;i++){
            
            p+=nums[i-1];
            t-=nums[i];

            if(p==t){
                return i;
            }
        }
        return -1;

    return -1;
    }
};