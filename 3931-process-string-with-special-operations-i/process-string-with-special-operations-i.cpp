class Solution {
public:
    string processStr(string s) {
        string m = "";
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                m.push_back(s[i]);
            } else if (!m.empty() && s[i] == '*') {
                m.pop_back();
            } else if (s[i] == '#') {
                m.insert(m.end(), m.begin(), m.end());
            } else if (s[i] == '%') {
                reverse(m.begin(), m.end());
            }
        }
        return m;
    }
};