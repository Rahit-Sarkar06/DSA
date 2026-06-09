class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int m=nums[0];
        for(int i=1;i<n;i++){
            if(i%2!=0){
                m-=nums[i];
            }else{
                m+=nums[i];
            }
        }
        return m;
    }
};