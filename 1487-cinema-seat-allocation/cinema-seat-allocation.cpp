class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
         unordered_map<int, vector<int>> mp;

        // Store reserved seats row-wise
        for (auto &r : reservedSeats) {
            int row = r[0];
            int seat = r[1];

            // Only seats 2 to 9 matter
            if (seat >= 2 && seat <= 9)
                mp[row].push_back(seat);
        }

        int ans = 0;

        // Rows having NO reserved seats in 2...9
        ans += (n - mp.size()) * 2;

        for (auto &p : mp) {
            int row = p.first;
            vector<int> seats = p.second;

            bool left = true;    // 2,3,4,5
            bool middle = true;  // 4,5,6,7
            bool right = true;   // 6,7,8,9

            for (int seat : seats) {
                if (seat == 2 || seat == 3 || seat == 4 || seat == 5)
                    left = false;

                if (seat == 4 || seat == 5 || seat == 6 || seat == 7)
                    middle = false;

                if (seat == 6 || seat == 7 || seat == 8 || seat == 9)
                    right = false;
            }

            if (left && right)
                ans += 2;
            else if (left || middle || right)
                ans += 1;
        }

        return ans;
    }
    
};