class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int cnt = 0;
        int b_cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'b')
                b_cnt++;

            else
                cnt = min(b_cnt, cnt + 1);
        }
        return cnt;
    }
};
