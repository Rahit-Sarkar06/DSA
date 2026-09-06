class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> m;
        int j = n / 2;
        for (int i = 1; i <= j; i++) {
            m.push_back(i);
            m.push_back((-1) * i);
        }
        if (n % 2 != 0)
            m.push_back(0);
        return m;
    }
};