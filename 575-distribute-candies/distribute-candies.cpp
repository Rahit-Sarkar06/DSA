class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        sort(candyType.begin(),candyType.end());
        int count=1;
        int i=1;
        while(i<n){
            if(count==(n/2)){
                return count;
            }
            if(candyType[i-1]!=candyType[i]){
                count++;
            }
        i++;
        }
        return count;
    }
};