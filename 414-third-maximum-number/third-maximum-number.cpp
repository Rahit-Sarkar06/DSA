class Solution {
public:
    int thirdMax(vector<int>& nums) {
            int n = nums.size();
        
        long long first = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] > first) {
                first = nums[i];
            }
        }
        
        long long second = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] > second && nums[i] != first) {
                second = nums[i];
            }
        }
        
        long long third = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] > third && nums[i] != first && nums[i] != second) {
                third = nums[i];
            }
        }
        
        if (third == LLONG_MIN) {
            return first;
        }
        
        return third;
     

    }
};