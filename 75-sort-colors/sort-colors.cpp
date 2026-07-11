class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0 = 0;
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                c0++;
            else if (nums[i] == 1)
                c1++;
            else
                c2++;
        }
        int j = 0;
        while (c0 > 0) {
            nums[j] = 0;
            c0--;
            j++;
        }
        while (c1 > 0) {
            nums[j] = 1;
            c1--;
            j++;
        }
        while (c2 > 0) {
            nums[j] = 2;
            c2--;
            j++;
        }
    }
};