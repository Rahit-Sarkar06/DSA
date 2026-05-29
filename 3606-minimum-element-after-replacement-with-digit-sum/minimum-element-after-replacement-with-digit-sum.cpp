class Solution {
public:
    int digitSum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
    int minElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=digitSum(nums[i]);
        }
        int min=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        return min;
    }
};