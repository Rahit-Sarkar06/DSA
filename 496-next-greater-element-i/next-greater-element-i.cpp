class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> r;
        stack<int> st;
        for (int i = 0; i < nums1.size(); i++) {
            int j = 0;
            while (nums1[i] != nums2[j]) {
                j++;
            }

            while (j < nums2.size() && nums1[i] >= nums2[j]) {
                j++;
            }
            if (j == nums2.size())
                r.push_back(-1);
            else
                r.push_back(nums2[j]);
        }

        return r;
    }
};