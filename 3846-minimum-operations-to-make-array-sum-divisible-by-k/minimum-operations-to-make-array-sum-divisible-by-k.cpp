class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            cnt+=nums[i];
        }
        if(k>cnt){
            return cnt;
        }else{
            return (cnt%k);
        }
    }
};