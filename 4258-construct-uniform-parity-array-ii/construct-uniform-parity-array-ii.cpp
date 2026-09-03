class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int miniodd = INT_MAX;
        int minieven = INT_MAX;
        int n = nums1.size();
        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 != 0) {
                miniodd = min(miniodd, nums1[i]);
            } else {
                minieven = min(minieven, nums1[i]);
            }
        }
        if (miniodd != INT_MAX && minieven != INT_MAX && miniodd > minieven) {
            return false;
        }
        return true;
    }
};