class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> m1;
        vector<int> m2;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                m1.push_back(nums[i]);
            } else if (nums[i] > pivot) {
                m2.push_back(nums[i]);
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == pivot) {
                m1.push_back(pivot);
            }
        }
        m1.insert(m1.end(), m2.begin(), m2.end());
        return m1;
    }
};