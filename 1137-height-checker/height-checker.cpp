class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>arr(heights);
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int count=0;
        int i=0;
        while(i<n){
            if(heights[i]!=arr[i]){
                count++;
            }
            i++;
        }
            return count;        
    }
};