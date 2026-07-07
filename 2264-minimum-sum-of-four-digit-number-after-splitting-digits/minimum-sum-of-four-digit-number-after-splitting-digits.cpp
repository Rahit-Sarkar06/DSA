class Solution {
public:
    int minimumSum(int num) {
        vector<int> m;
        while (num > 0) {
            m.push_back(num % 10);
            num = num / 10;
        }
        sort(m.begin(), m.end());
        m[0]=(m[0] + m[1]) * 10 + m[2] + m[3];
        return m[0];
    }
};