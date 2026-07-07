class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        while (i < n) {
            while (i < s.size() && s[i] != ' ') {
                i++;
            }
            reverse(s.begin() + j, s.begin() + i);
            i++;
            j = i;
        }
        return s;
    }
};