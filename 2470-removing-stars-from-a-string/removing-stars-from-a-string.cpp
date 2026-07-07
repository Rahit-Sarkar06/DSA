class Solution {
public:
    string removeStars(string s) {
        stack<char> m;
        int n = s.size();
        int i = 0;
        while (i < n) {
            if (s[i] == '*' && !m.empty()) {
                m.pop();
            } else {
                m.push(s[i]);
            }
            i++;
        }
        string p = "";

        while (!m.empty()) {
            char x = m.top();
            m.pop();
            p += x;
        }
        reverse(p.begin(), p.end());
        return p;
    }
};