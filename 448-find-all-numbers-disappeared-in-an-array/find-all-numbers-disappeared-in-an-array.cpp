class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>result;
        int n=nums.size();
        int k=1;
        while(k<nums[0]){
            result.push_back(k);
            k++;
        }

        int i=0;
        int m=nums[0];

        
        while(i<n){
        if(nums[i]==m+1 || nums[i]==m){
            m=nums[i];
        }
        if(nums[i]!=m){
            m++;
            while(m<nums[i]){
                result.push_back(m);
                m++;
            }
        }

          i++;
        }
        int p=nums[n-1]+1;
       
            while(p<=n){
            result.push_back(p);
            p++;
            }
        
        
        return result;
    }
};