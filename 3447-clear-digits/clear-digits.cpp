class Solution {
public:
    string clearDigits(string s) {
        stack<char> m;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9' && !m.empty()) {
                m.pop();
            } else {
                m.push(s[i]);
            }
        }
        string p;
        while (!m.empty()) {
            p += m.top();
            m.pop();
        }
        reverse(p.begin(), p.end());
        return p;
    }
};