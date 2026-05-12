class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int count=0;
        while(i<n-1){
            int j=i+1;
            while(j<n){
           
            if(nums[i]+nums[j]<target){
                count++;
            }
            j++;
            }
            i++;
        }
       return count; 
    }
};