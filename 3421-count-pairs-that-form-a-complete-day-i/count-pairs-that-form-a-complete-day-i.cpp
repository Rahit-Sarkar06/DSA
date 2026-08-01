class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, int> freq;
        int count = 0;

        for (int h : hours) {
            int rem = h % 24;
            int partner = (24 - rem) % 24;

            if (freq.find(partner) != freq.end()) {
                count += freq[partner];
            }

            freq[rem]++;
        }

        return count;
    }
};