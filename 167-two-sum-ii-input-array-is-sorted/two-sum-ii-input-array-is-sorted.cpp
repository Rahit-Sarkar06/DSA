class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0;
        int j = n - 1;
        while (i < j) {
            int m = numbers[i] + numbers[j];
            if (m < target) {
                i++;
            } else if (m > target) {
                j--;
            } else {
                return {i + 1, j + 1};
            }
        }

        return {-1, -1};
    }
};