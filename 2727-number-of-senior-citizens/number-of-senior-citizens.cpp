class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        int n = details.size();
        for (int i = 0; i < n; i++) {
            int t = (details[i][11] - '0') * 10 + (details[i][12] - '0');
            if (t > 60)
                cnt++;
        }
        return cnt;
    }
};