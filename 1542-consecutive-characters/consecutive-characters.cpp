class Solution {
public:
    int maxPower(string s) {
        int cnt = 1;
        int ans = 1;
        char c = s[0];
        int n = s.size();
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                cnt++;
            } else {
                ans = max(cnt, ans);
                cnt = 1;
                c = s[i];
            }
        }
        ans = max(cnt, ans);
        return ans;
    }
};