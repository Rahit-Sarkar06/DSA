class Solution {
public:
    int maxFreqSum(string s) {

        int maxv = 0;
        int maxc = 0;
        unordered_map<char, int> freq;

        for (int num : s) {
            freq[num]++;
        }

        for (auto it : freq) {
            if (it.first == 'a' || it.first == 'e' || it.first == 'i' ||
                it.first == 'o' || it.first == 'u') {
                if (it.second > maxv)
                    maxv = it.second;
            } else if (it.second > maxc) {
                maxc = it.second;
            }
        }
        return maxv + maxc;
    }
};