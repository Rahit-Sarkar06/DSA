class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        int i = prices.size() - 1;
        int j = discounts.size() - 1;
        double cnt = 0;
        while (i >= 0 && j >= 0) {
            double m = (prices[i] * (100.0 - discounts[j])) / 100.0;
            cnt += m;
            i--;
            j--;
        }
        if (i >= 0) {
            while (i >= 0) {
                cnt += prices[i];
                i--;
            }
        }
        return cnt;
    }
};