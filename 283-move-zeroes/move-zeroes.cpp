class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>result;
        int n=nums.size();
        int i=0;
        int j=0;
        int count=0;
        while(i<n){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }else{
                count++;
            }

        i++;
        }
        int m=0;
        while(m<count){
            nums[j]=0;
            m++;
            j++;
        }
    
    }
};