class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        if (n == k) {
            int max = -1;

            for (auto& pair : freq) {
                if (pair.first > max) {
                    max = pair.first;
                }
            }

            return max;
        }

        if (k == 1) {
            int max = -1;

            for (auto& pair : freq) {
                if (pair.second == 1 && pair.first > max) {
                    max = pair.first;
                }
            }

            return max;
        }

        int first = nums.front();
        int last = nums.back();

        if (freq[first] == 1 && freq[last] == 1) {
            if (first > last) {
                return first;
            } else {
                return last;
            }
        } else if (freq[first] == 1 && freq[last] != 1) {
            return first;
        } else if (freq[first] != 1 && freq[last] == 1) {
            return last;
        }

        return -1;
    }
};