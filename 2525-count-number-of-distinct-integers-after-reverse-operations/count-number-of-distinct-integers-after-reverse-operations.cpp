class Solution {
public:
    int reverse(int n) {
        if (n < 10)
            return n;
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n = n / 10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int p = nums.size();
        for (int i = 0; i < p; i++) {
            nums.push_back(reverse(nums[i]));
        }

        unordered_set<int> st(nums.begin(), nums.end());
        return st.size();
    }
};