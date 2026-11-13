class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();

        vector<vector<int>> a;
        int start = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 1; i < n; i++) {
            if (intervals[i][0] > end) {
                a.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            } else if (intervals[i][0] <= end) {
                end = max(end, intervals[i][1]);
            }
        }
        a.push_back({start, end});
        return a;
    }
};