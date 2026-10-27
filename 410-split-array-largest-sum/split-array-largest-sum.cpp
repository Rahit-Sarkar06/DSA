class Solution {
public:
    bool check(vector<int>& s, int days, int t) {
        int n = s.size();
        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int m = sum + s[i];
            if (m > t) {
                cnt++;
                sum = s[i];
            } else if (m == t) {
                cnt++;
                sum = 0;
            } else {
                sum += s[i];
            }
        }
        if (sum > 0)
            cnt++;
        return cnt <= days;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = -1;
        int sum = 0;
        int ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
            sum += nums[i];
        }
        if (sum == 0)
            return 0;
        int i = maxi;
        int j = sum;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (check(nums, k, mid)) {
                ans = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return ans;
    }
};