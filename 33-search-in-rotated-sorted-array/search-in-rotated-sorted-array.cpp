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
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int ans = -1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[i] <= nums[mid]) {
                ans = search(nums, i, mid, target);
                i = mid + 1;
                if (ans != -1)
                    break;
            } else {
                ans = search(nums, mid, j, target);
                j = mid - 1;
                if (ans != -1)
                    break;
            }
        }

        return ans;
    }
};