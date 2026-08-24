class Solution {
public:
    string reverseByType(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;
        while (i <= j) {
            if (s[i] < 'a' || s[i] > 'z') {
                i++;
            } else if (s[j] < 'a' || s[j] > 'z') {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        i = 0;
        j = n - 1;
        while (i <= j) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                i++;
            } else if (s[j] >= 'a' && s[j] <= 'z') {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};