class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string t = "";
        int m = s.size();
        int n = spaces.size();
        int i = 0;
        int j = 0;
        while (i < m) {
            if (j < n && i == spaces[j]) {
                t += " ";
                j++;
            } else {
                t += s[i];
                i++;
            }
        }
        return t;
    }
};