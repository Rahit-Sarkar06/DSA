class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for(int i=n-1;i>=1;i--){
            for(int j=i-1;j>=0;j--){
                if(nums[i]-nums[j]==k){
                    count++;
                }
            }
        }
          
        return count;
    }
};