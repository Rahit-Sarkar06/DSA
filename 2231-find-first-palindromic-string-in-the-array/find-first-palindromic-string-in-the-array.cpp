class Solution {
public:
    bool check(string s) {
        int i = 0;
        int n = s.size();
        int j = n - 1;
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int i;
        for (i = 0; i < words.size(); i++) {
            if (check(words[i]))
                return words[i];
        }
        return "";
    }
};