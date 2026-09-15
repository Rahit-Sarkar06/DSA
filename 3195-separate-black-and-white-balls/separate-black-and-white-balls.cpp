class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size();
        long long cnt = 0;
        long long result = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                cnt++;
            } else {
                result += cnt;
            }
        }
        return result;
    }
};