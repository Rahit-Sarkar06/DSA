class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        long long count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            auto it_low=lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i]);
            auto it_high=upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i]);

            count+=(it_high-it_low);
        }
       return count;  
    }
};