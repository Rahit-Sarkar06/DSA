class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> a1;
        vector<int> a2;
        int i, t;
        int n = nums.size();
        k = k % n;
        for (i = 0; i < n - k; i++) {
            a1.push_back(nums[i]);
        }
        for (int j = i; j < n; j++) {
            a2.push_back(nums[i]);
            i++;
        }
        for (t = 0; t < a2.size(); t++) {
            nums[t] = a2[t];
        }
        int m = 0;
        while (m < a1.size()) {
            nums[t] = a1[m];
            t++;
            m++;
        }
    }
};