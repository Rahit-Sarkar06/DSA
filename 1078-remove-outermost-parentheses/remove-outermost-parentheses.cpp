class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string p = "";
        int i = 0;
        int cnt = 0;
        while (i < n) {
            if (s[i] == '(') {
                cnt++;
                if (cnt > 1) {
                    p += s[i];
                }
            } else {
                cnt--;
                if (cnt > 0) {
                    p += s[i];
                }
            }
            i++;
        }

        return p;
    }
};