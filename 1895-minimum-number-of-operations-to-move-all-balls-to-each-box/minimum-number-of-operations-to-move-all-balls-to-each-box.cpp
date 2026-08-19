class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> m;
        vector<int> p;
        int n = boxes.size();
        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1')
                m.push_back(i);
        }
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m.size(); j++) {
                cnt += abs(i - m[j]);
            }
            p.push_back(cnt);
        }
        return p;
    }
};