class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while (i < n) {
            if (i != n - 1 && nums[i] == 0)
                return false;
            int maxi = i + nums[i];
            int ind = -1;
            int j = i + 1;
            int cnt = nums[i];
            while (j < n && cnt > 1) {
                int t = j + nums[j];
                if (t > maxi) {
                    maxi = t;
                    ind = j;
                }
                j++;
                cnt--;
            }
            if (ind == -1) {
                i = maxi;
            } else {
                i = ind;
            }

            if (i >= n - 1)
                return true;
        }
        if (i >= n - 1)
            return true;

        return false;
    }
};