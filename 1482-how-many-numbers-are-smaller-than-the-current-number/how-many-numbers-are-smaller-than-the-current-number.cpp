class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int>res;
    int count=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nums[i]>nums[j] && i!=j){
                count++;
            }
        }
        res.push_back(count);
        count=0;
    }
        return res;
    }
};