class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int bal = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                bal++;
            } else if (s[i] == 'R') {
                bal--;
            }
            if (bal == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};