class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> p;
        p = nums;
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        while (i < j) {
            if (nums[i] + nums[j] > target) {
                j--;
            } else if (nums[i] + nums[j] < target) {
                i++;
            } else {
                break;
            }
        }
        vector<int> m;
        int t;
        int cnt1 = 0;
        int cnt2 = 0;
        for (t = 0; t < nums.size(); t++) {
            if (p[t] == nums[i] && cnt1 == 0) {
                m.push_back(t);
                cnt1++;
            } else if (p[t] == nums[j] && cnt2 == 0) {
                m.push_back(t);
                cnt2++;
            }
        }

        return m;
    }
};