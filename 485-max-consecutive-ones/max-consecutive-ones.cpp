class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int m=0;
            if(n==1) return nums[0];

            if(nums[0]==1) count=1;
        for(int i=1;i<n;i++){

            if(nums[i-1]==nums[i]&&nums[i]==1){
                count++;
            }else if(nums[i-1]!=nums[i]&&nums[i]==1){
                count=1;
            }else{
                if(m<count){
                    m=count;
                }
                count=0;
            }
            
        }
        if(m<count){
            return count;
        }
        return m;
        
    }
};