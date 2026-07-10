class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        double maxArea = 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            double t = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, t);
            if (height[right] > height[left])
                left++;
            else
                right--;
        }

        return maxArea;
    }
};