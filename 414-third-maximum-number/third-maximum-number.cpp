class Solution {
public:
    int thirdMax(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n=nums.size();
      int max=nums[n-1];
      int i=n-2;
      while(i>=0 && nums[i]==max){
        i--;
      }
      if(i<0) return max;
      int max2=nums[i];
      
      int j=i-1;
      while(j>=0 && nums[j]==max2){
        j--;
      }
      if(j<0){
        return max;
      }else{
        return nums[j];
      }
     

    }
};