class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> n;
        int max = candies[0];
        for (int m = 1; m < candies.size(); m++) {
            if (candies[m] > max) {
                max = candies[m];
            }
        }
        for (int m = 0; m < candies.size(); m++) {
            if (candies[m] + extraCandies >= max) {
                n.push_back(true);
            } else {
                n.push_back(false);
            }
        }
        return n;
    }
};