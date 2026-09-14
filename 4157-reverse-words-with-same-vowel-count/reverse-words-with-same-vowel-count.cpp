class Solution {
public:
    string reverseWords(string s) {
        string t = "";
        int n = s.size();
        int i = 0;
        int cnt = 0;
        while (i < n && s[i] != ' ') {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u')
                cnt++;
            i++;
        }
        i++;
        int first = i;

        while (i < n) {
            int newcnt = 0;
            while (i < n && s[i] != ' ') {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u')
                    newcnt++;
                i++;
            }
            int last = i - 1;
            if (cnt == newcnt) {
                while (first <= last) {
                    char temp = s[first];
                    s[first] = s[last];
                    s[last] = temp;
                    first++;
                    last--;
                }
            }
            i++;
            first = i;
        }
        return s;
    }
};