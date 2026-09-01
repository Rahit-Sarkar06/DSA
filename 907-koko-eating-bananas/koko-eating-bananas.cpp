class Solution {
public:
    long long cal(vector<int>& v, int hourly) {
        long long total = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            total += ceil((double)v[i] / hourly);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > high) {
                high = piles[i];
            }
        }
        int low = 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            long long totalH = cal(piles, mid);
            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};