class Solution {
public:
    int addMinimum(string word) {
        string s = "abc";
        int cnt = 0;
        int i = 0;
        int n = word.size();
        int j = 0;
        while (i < n) {
            if (word[i] != s[j]) {
                while (word[i] != s[j]) {
                    j++;
                    cnt++;
                    j = j % 3;
                }
            }
            i++;
            j++;
            j = j % 3;
        }
        if (word[n - 1] == 'a') {
            cnt += 2;
        } else if (word[n - 1] == 'b') {
            cnt++;
        }
        return cnt;
    }
};