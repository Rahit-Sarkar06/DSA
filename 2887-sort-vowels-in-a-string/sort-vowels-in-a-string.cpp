class Solution {
public:
    string sortVowels(string s) {
        vector<char> m;
        vector<int> p;
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                m.push_back(s[i]);
                p.push_back(i);
            }
        }
        sort(m.begin(), m.end());
        int j = 0;
        int k = 0;
        for (int i = 0; i < s.size(); i++) {
            if (k < p.size() && p[k] == i) {
                s[i] = m[j];
                j++;
                k++;
            }
        }
        return s;
    }
};