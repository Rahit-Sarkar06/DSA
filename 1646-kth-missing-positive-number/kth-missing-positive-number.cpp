class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int i = 0;
        int j = 1;
        int cnt = 0;
        while (j != arr[n - 1]) {
            if (arr[i] == j) {
                i++;
            } else {
                cnt++;
            }
            if (cnt == k)
                return j;
            j++;
        }

        return arr[n - 1] + (k - cnt);
    }
};