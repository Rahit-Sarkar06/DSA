class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
        if(costs[0]>coins) return 0;
        int i=0;
        int p=0;
        while(i<n && p + costs[i] <= coins){
            p+=costs[i];
            i++;
        }
        return i;
    }
};