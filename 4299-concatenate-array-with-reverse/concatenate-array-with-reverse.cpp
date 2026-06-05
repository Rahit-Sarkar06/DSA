class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(2 * n);
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
            arr[2*n-i-1]=nums[i];
        }
        return arr;
    }
};