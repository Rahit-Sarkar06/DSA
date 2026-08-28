class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int Alice = 0;
        int Bob = 0;
        int i = 0;
        int j = piles.size() - 1;
        int p = 0;
        int q = j;
        while (i < j) {
            while (i < j && piles[i] == piles[j]) {
                i++;
                j--;
            }
            if (piles[i] > piles[j]) {
                Alice += piles[p];
                p++;
                i = p;
            } else {
                Alice += piles[q];
                q--;
                j = q;
            }

            while (i < j && piles[i] == piles[j]) {
                i++;
                j--;
            }
            if (piles[i] < piles[j]) {
                Bob += piles[p];
                p++;
                i = p;
            } else {
                Bob += piles[q];
                q--;
                j = q;
            }
        }
        return Alice > Bob;
    }
};