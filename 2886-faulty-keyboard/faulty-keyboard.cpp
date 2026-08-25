class Solution {
public:
    string finalString(string s) {
        int n = s.size();
        string m = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == 'i') {
                reverse(m.begin(), m.end());
            } else {
                m += s[i];
            }
        }
        return m;
    }
};