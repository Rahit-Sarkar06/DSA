class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size();
        int i = 0;
        while (i <= n / 2) {
            if (s[i] == s[n - i - 1]) {
                return i;
            }
            i++;
        }
        return -1;
    }
};