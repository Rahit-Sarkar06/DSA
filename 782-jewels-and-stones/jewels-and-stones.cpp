class Solution {
public:
    bool isJewel(string s, char ch) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (ch == s[i])
                return true;
        }
        return false;
    }
    int numJewelsInStones(string jewels, string stones) {
        int n = stones.size();
        int cnt = 0;
        for (int i = 0; i < stones.size(); i++) {
            if (isJewel(jewels, stones[i]))
                cnt++;
        }
        return cnt;
    }
};