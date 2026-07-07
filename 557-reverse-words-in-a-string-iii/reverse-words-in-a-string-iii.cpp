class Solution {
public:
    void reverse(string& s) {
        int n = s.size();
        int i = 0;
        while (i < n / 2) {
            swap(s[i], s[n - i - 1]);
            i++;
        }
    }
    string reverseWords(string s) {
        string ans = "";
        int i = 0;

        while (i < s.size()) {
            string p = "";

            while (i < s.size() && s[i] != ' ') {
                p += s[i];
                i++;
            }

            reverse(p);
            ans += p;

            if (i < s.size()) {
                ans += ' ';
                i++;
            }
        }

        return ans;
    }
};