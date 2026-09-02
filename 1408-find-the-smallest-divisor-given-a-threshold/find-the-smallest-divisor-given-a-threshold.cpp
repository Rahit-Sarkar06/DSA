class Solution {
public:
    long long cal(vector<int>& v, int hourly) {
        long long total = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            total += ceil(v[i] + hourly - 1) / hourly;
        }
        return total;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > high) {
                high = nums[i];
            }
        }
        int low = 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            long long totalH = cal(nums, mid);
            if (totalH <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};