class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mind = -1;
        int maxd = -1;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxd = i;
            }
            if (nums[i] < mini) {
                mini = nums[i];
                mind = i;
            }
        }
        int a;
        if (mind == maxd) {
            a = min(mind + 1, n - mind);
        } else if (mind > maxd) {
            a = min({mind + 1, maxd + 1 + n - mind, n - maxd});
        } else {
            a = min({maxd + 1, n - mind, mind + 1 + n - maxd});
        }
        return a;
    }
};