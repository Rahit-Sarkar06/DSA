class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> n;
        int p = nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<p-1;i++){
            if(count==2){
                break;
            }
            if(nums[i]==nums[i+1]){
                n.push_back(nums[i]);
                count++;
            }
        }
        return n;
    }
};