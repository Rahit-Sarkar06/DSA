class Solution {
public:
    bool check(vector<int>& v, int m, int k, int t) {
        int n = v.size();
        int cnt = 0;
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] <= t) {
                cnt++;
            } else {
                res += (cnt / k);
                cnt = 0;
            }
        }
        res += (cnt / k);
        if (res >= m)
            return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size())
            return -1;
        int n = bloomDay.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] > maxi) {
                maxi = bloomDay[i];
            }
            if (bloomDay[i] < mini) {
                mini = bloomDay[i];
            }
        }
        if (m * k == n)
            return maxi;
        int i = mini;
        int j = maxi;
        int ans;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (check(bloomDay, m, k, mid)) {
                ans = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return ans;
    }
};