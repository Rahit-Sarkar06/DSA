class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }
        int sum = 0;

        for (auto& pair : freq) {
            if (pair.second % k == 0) {
                sum += (pair.second * pair.first);
            }
        }
        return sum;
    }
};