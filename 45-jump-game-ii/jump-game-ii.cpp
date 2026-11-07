class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int cntt = 0;
        if (n == 1)
            return 0;
        while (i < n) {

            int maxi = i + nums[i];
            if (maxi >= n - 1)
                return cntt + 1;
            int ind = -1;
            int j = i + 1;
            int cnt = nums[i];
            while (j < n && cnt >= 1) {
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

            cntt++;
            if (i == n - 1)
                break;
        }

        return cntt;
    }
};