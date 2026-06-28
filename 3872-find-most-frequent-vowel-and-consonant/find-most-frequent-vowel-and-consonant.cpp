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
                it.first == 'o' || it.first == 'u')
                maxv = max(it.second, maxv);
            else
                maxc = max(it.second, maxc);
        }
        return maxv + maxc;
    }
};