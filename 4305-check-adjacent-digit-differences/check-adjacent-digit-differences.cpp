class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n = s.size();
        int c = s[0] - '0';
        for (int i = 1; i < n; i++) {
            if (abs(s[i] - '0' - c) > 2)
                return false;
            c = s[i] - '0';
        }
        return true;
    }
};