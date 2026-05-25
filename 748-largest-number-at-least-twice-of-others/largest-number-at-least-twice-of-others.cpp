class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>v(nums);
        int n=nums.size();
        sort(v.begin(),v.end());


        
        if(v[n-2]==0 || v[n-1]/2>=v[n-2]){
            for(int i=0;i<n;i++){
                if(nums[i]==v[n-1]){
                    return i;
                }
            }
        }
        return -1;
    }
};