class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int totalBeams = 0;
        int prevDeviceCount = 0;

        for (string& row : bank) {
            int currentDeviceCount = 0;
            for (char c : row) {
                if (c == '1')
                    currentDeviceCount++;
            }

            if (currentDeviceCount > 0) {
                totalBeams += (prevDeviceCount * currentDeviceCount);

                prevDeviceCount = currentDeviceCount;
            }
        }
        return totalBeams;
    }
};