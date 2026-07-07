class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int e = 0;
        int d = 0;
        for (int i = 0; i < nums.size(); i++) {
            e += nums[i];
            int n = nums[i];
            while (n > 0) {
                d += n % 10;
                n = n / 10;
            }
        }
        return abs(d - e);
    }
};