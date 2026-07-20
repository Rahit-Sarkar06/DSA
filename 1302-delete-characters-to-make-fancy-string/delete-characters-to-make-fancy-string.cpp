class Solution {
public:
    string makeFancyString(string s) {
        string m = "";
        m += s[0];
        int i = 1;
        int n = s.size();
        int cnt = 1;
        while (i < n) {
            if (s[i] == s[i - 1]) {
                cnt++;
            } else {
                cnt = 1;
            }
            if (cnt < 3)
                m += s[i];
            i++;
        }
        return m;
    }
};