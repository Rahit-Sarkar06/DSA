class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(),nums.end());
        int i=1;
        int count=1;
        while(i<n){
            if(nums[i-1]==nums[i]){
                count++;
            }else{
                count=1;
            }
            
            if(count>n/2){
                return nums[i];
            }
            i++;
        }
        return 0;
    }
};