class Solution {
public:
    bool prime(int num) {
        if (num <= 1)
            return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int i = 0;
        while (!prime(nums[i])) {
            i++;
        }

        int prev = i;

        int curr;
        for (int j = i; j < nums.size(); j++) {
            if (prime(nums[j])) {
                curr = j;
            }
        }
        return abs(prev - curr);
    }
};