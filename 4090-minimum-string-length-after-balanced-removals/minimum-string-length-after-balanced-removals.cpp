class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int i = 0;
        int j = 0;
        for (int m = 0; m < s.size(); m++) {
            if (s[m] == 'a') {
                i++;
            } else {
                j++;
            }
        }
        return abs(i - j);
    }
};