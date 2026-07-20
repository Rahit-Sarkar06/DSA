class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    string sortVowels(string s) {
        vector<char> m;
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                m.push_back(s[i]);
            }
        }
        sort(m.begin(), m.end());
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                s[i] = m[j];
                j++;
            }
        }
        return s;
    }
};