class Solution {
public:
    long sum(vector<int>& nums, int m) {
        long long s = 0;
        for (int i = 0; i < nums.size(); i++) {
            s += ceil((double)nums[i] / m);
        }
        return s;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] > ans) {
                ans = nums[i];
            }
        }
        int i = 1;
        int j = ans;

        while (i <= j) {
            int mid = i + (j - i) / 2;
            long long p = sum(nums, mid);
            if (p <= threshold) {
                ans = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return ans;
    }
};