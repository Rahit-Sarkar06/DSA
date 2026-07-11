class Solution {
public:
    int search(vector<int>& nums, int left, int right, int target) {

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int i = 0;
        int n = nums.size();
        while (i < n - 1 && nums[i] < nums[i + 1]) {
            i++;
        }
        if (target >= nums[0] && target <= nums[i]) {
            int m = search(nums, 0, i, target);
            if (m != -1)
                return m;
        } else if (i < n - 1 && target >= nums[i + 1] &&
                   target <= nums[n - 1]) {
            int t = search(nums, i + 1, n - 1, target);
            if (t != -1)
                return t;
        }
        return -1;
    }
};