class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int m = nums1.size();
        int n = nums2.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int i = 0;
        int j = 0;
        int x = 0;
        while (i < m && j < n) {
            if (nums1[i] == nums2[j]) {
                cnt1++;
                cnt2++;
                x = nums1[i];
                i++;
                j++;
            } else if (nums1[i] > nums2[j]) {
                if (x == nums2[j])
                    cnt2++;
                j++;
            } else {
                if (x == nums1[i])
                    cnt1++;
                i++;
            }
        }
        while (i < m) {
            if (nums1[i] == nums2[n - 1])
                cnt1++;
            i++;
        }
        while (j < n) {
            if (nums2[j] == nums1[m - 1])
                cnt2++;
            j++;
        }
        vector<int> t(2);
        t[0] = cnt1;
        t[1] = cnt2;
        return t;
    }
};