class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        int r = -1;
        int t = -1;

        for (int i = 0; i < n; i++) {
            if (r == -1 && s[i] == 'b')
                r = i;

            if (s[i] == 'a')
                t = i;
        }
        
        if (r==-1 || t < r)
            return true;
        return false;
    }
};