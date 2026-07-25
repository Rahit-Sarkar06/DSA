class Solution {
public:
    int maxProduct(int n) {
        vector<int> m;
        int i = 0;
        while (n > 0) {
            m.push_back(n % 10);
            n /= 10;
            i++;
        }
        sort(m.begin(), m.end());
        return m[i - 1] * m[i - 2];
    }
};