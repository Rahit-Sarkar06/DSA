class Solution {
public:
    bool prime(int num) {
        if (num <= 1)
            return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        for (auto& p : freq) {
            if (prime(p.second)) {
                return true;
            }
        }
        return false;
    }
};