class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> st;
        int cnt = 0;

        for (string s : words) {
            string rev = s;
            reverse(rev.begin(), rev.end());

            if (st.count(rev))
                cnt++;
            else
                st.insert(s);
        }

        return cnt;
    }
};